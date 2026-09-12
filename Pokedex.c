#include <fxlib.h>
#include <stdio.h>
#include <string.h>
#include "pokemon.h"


#define VISIBLE_LIST 5
#define TEXT_WIDTH 20
#define DETAIL_LINES 5
#define SEARCH_LENGTH 15
#define SEARCH_RESULTS 5


/*
 * ------------------------------------------------------------
 * Function prototypes
 * ------------------------------------------------------------
 */

void clear_screen(void);

void print_text(
    int x,
    int y,
    const char *text
);

void draw_header(
    const char *text
);

int make_line(
    const char *text,
    char *line
);

const char *skip_line(
    const char *text
);

const char *print_wrapped_line(
    const char *text,
    int x,
    int y
);

int count_lines(
    const char *text
);

char lower_char(
    char c
);

int starts_with_ignore_case(
    const char *text,
    const char *search
);

int is_number(
    const char *text
);

int number_search(
    const char *text
);

void add_search_char(
    char *search,
    int *length,
    char c
);

void draw_search(
    const char *search,
    int selected,
    int result_count,
    int *results
);

int search_screen(void);

void draw_list(
    int selected
);

int draw_detail(
    int selected,
    int scroll
);


/*
 * ------------------------------------------------------------
 * Basic display functions
 * ------------------------------------------------------------
 */

void clear_screen(void)
{
    Bdisp_AllClr_DDVRAM();
}


void print_text(
    int x,
    int y,
    const char *text
)
{
    PrintMini(
        x,
        y,
        (unsigned char *)text,
        MINI_OVER
    );
}


void draw_header(
    const char *text
)
{
    print_text(
        0,
        0,
        text
    );

    Bdisp_DrawLineVRAM(
        0,
        7,
        127,
        7
    );
}


/*
 * ------------------------------------------------------------
 * Word wrapping
 * ------------------------------------------------------------
 */

int make_line(
    const char *text,
    char *line
)
{
    int length;
    int last_space;
    int i;


    length = 0;
    last_space = -1;


    while (
        text[length] != '\0' &&
        length < TEXT_WIDTH
    )
    {
        if (text[length] == ' ')
        {
            last_space = length;
        }

        length++;
    }


    if (
        text[length] != '\0' &&
        last_space > 0
    )
    {
        length = last_space;
    }


    if (length == 0)
    {
        if (text[0] == '\0')
        {
            line[0] = '\0';
            return 0;
        }

        line[0] = text[0];
        line[1] = '\0';

        return 1;
    }


    for (
        i = 0;
        i < length;
        i++
    )
    {
        line[i] = text[i];
    }


    line[length] = '\0';


    return length;
}


/*
 * ------------------------------------------------------------
 * Skip one wrapped line.
 * ------------------------------------------------------------
 */

const char *skip_line(
    const char *text
)
{
    char line[TEXT_WIDTH + 1];

    int used;


    if (*text == '\0')
    {
        return text;
    }


    used =
        make_line(
            text,
            line
        );


    if (used <= 0)
    {
        return text + 1;
    }


    text += used;


    while (*text == ' ')
    {
        text++;
    }


    return text;
}


/*
 * ------------------------------------------------------------
 * Print one wrapped line.
 * ------------------------------------------------------------
 */

const char *print_wrapped_line(
    const char *text,
    int x,
    int y
)
{
    char line[TEXT_WIDTH + 1];

    int used;


    if (*text == '\0')
    {
        return text;
    }


    used =
        make_line(
            text,
            line
        );


    if (used <= 0)
    {
        return text + 1;
    }


    print_text(
        x,
        y,
        line
    );


    text += used;


    while (*text == ' ')
    {
        text++;
    }


    return text;
}


/*
 * ------------------------------------------------------------
 * Count wrapped lines.
 * ------------------------------------------------------------
 */

int count_lines(
    const char *text
)
{
    char line[TEXT_WIDTH + 1];

    int count;
    int used;


    count = 0;


    while (*text != '\0')
    {
        used =
            make_line(
                text,
                line
            );


        if (used <= 0)
        {
            break;
        }


        text += used;


        while (*text == ' ')
        {
            text++;
        }


        count++;
    }


    return count;
}


/*
 * ------------------------------------------------------------
 * Convert character to lowercase.
 * ------------------------------------------------------------
 */

char lower_char(
    char c
)
{
    if (
        c >= 'A' &&
        c <= 'Z'
    )
    {
        return c + ('a' - 'A');
    }


    return c;
}


/*
 * ------------------------------------------------------------
 * Case-insensitive prefix comparison.
 * ------------------------------------------------------------
 */

int starts_with_ignore_case(
    const char *text,
    const char *search
)
{
    int i;


    i = 0;


    while (search[i] != '\0')
    {
        if (text[i] == '\0')
        {
            return 0;
        }


        if (
            lower_char(text[i]) !=
            lower_char(search[i])
        )
        {
            return 0;
        }


        i++;
    }


    return 1;
}


/*
 * ------------------------------------------------------------
 * Determine whether search string is numeric.
 * ------------------------------------------------------------
 */

int is_number(
    const char *text
)
{
    int i;


    if (text[0] == '\0')
    {
        return 0;
    }


    i = 0;


    while (text[i] != '\0')
    {
        if (
            text[i] < '0' ||
            text[i] > '9'
        )
        {
            return 0;
        }


        i++;
    }


    return 1;
}


/*
 * ------------------------------------------------------------
 * Convert numeric search to Pokemon index.
 *
 * 1   -> 0
 * 25  -> 24
 * 151 -> 150
 * 269 -> 268
 * 270 -> 269
 * 386 -> 385
 * ------------------------------------------------------------
 */

int number_search(
    const char *text
)
{
    int number;
    int i;


    number = 0;
    i = 0;


    if (text[0] == '\0')
    {
        return -1;
    }


    while (text[i] != '\0')
    {
        if (number > 1000)
        {
            return -1;
        }


        number =
            number * 10 +
            (text[i] - '0');


        i++;
    }


    if (
        number < 1 ||
        number > POKEMON_COUNT
    )
    {
        return -1;
    }


    return number - 1;
}


/*
 * ------------------------------------------------------------
 * Add character to search string.
 * ------------------------------------------------------------
 */

void add_search_char(
    char *search,
    int *length,
    char c
)
{
    if (
        *length <
        SEARCH_LENGTH - 1
    )
    {
        search[*length] = c;

        (*length)++;

        search[*length] = '\0';
    }
}


/*
 * ------------------------------------------------------------
 * Draw search screen.
 * ------------------------------------------------------------
 */

void draw_search(
    const char *search,
    int selected,
    int result_count,
    int *results
)
{
    char line[32];

    int i;
    int y;


    clear_screen();


    draw_header(
        "POKEDEX SEARCH"
    );


    print_text(
        0,
        10,
        "SEARCH:"
    );


    print_text(
        42,
        10,
        search
    );


    for (
        i = 0;
        i < result_count &&
        i < SEARCH_RESULTS;
        i++
    )
    {
        y =
            20 +
            i * 7;


        if (i == selected)
        {
            Bdisp_AreaReverseVRAM(
                0,
                y,
                127,
                y + 6
            );
        }


        sprintf(
            line,
            "#%03d %s",
            results[i] + 1,
            pokemon[results[i]].name
        );


        print_text(
            1,
            y,
            line
        );
    }


    if (
        search[0] != '\0' &&
        result_count == 0
    )
    {
        print_text(
            0,
            23,
            "No Pokemon found"
        );
    }


    print_text(
        0,
        59,
        "EXE Select EXIT Back"
    );


    Bdisp_PutDisp_DD();
}


/*
 * ------------------------------------------------------------
 * Search screen.
 * ------------------------------------------------------------
 */

int search_screen(void)
{
    char search[SEARCH_LENGTH];

    int length;
    int results[SEARCH_RESULTS];
    int result_count;
    int selected;
    int i;
    int number_result;

    unsigned int key;


    search[0] = '\0';

    length = 0;

    result_count = 0;

    selected = 0;


    while (1)
    {
        result_count = 0;


        /*
         * Numeric search.
         */

        if (search[0] != '\0')
        {
            if (is_number(search))
            {
                number_result =
                    number_search(search);


                if (number_result >= 0)
                {
                    results[0] =
                        number_result;

                    result_count = 1;
                }
            }


            /*
             * Name search.
             */

            else
            {
                for (
                    i = 0;
                    i < POKEMON_COUNT;
                    i++
                )
                {
                    if (
                        starts_with_ignore_case(
                            pokemon[i].name,
                            search
                        )
                    )
                    {
                        if (
                            result_count <
                            SEARCH_RESULTS
                        )
                        {
                            results[result_count] =
                                i;

                            result_count++;
                        }
                    }


                    if (
                        result_count >=
                        SEARCH_RESULTS
                    )
                    {
                        break;
                    }
                }
            }
        }


        /*
         * Keep selection valid.
         */

        if (result_count == 0)
        {
            selected = 0;
        }
        else if (
            selected >=
            result_count
        )
        {
            selected =
                result_count - 1;
        }


        draw_search(
            search,
            selected,
            result_count,
            results
        );


        GetKey(
            &key
        );


        switch (key)
        {
            case KEY_CHAR_0:
                add_search_char(
                    search,
                    &length,
                    '0'
                );
                break;

            case KEY_CHAR_1:
                add_search_char(
                    search,
                    &length,
                    '1'
                );
                break;

            case KEY_CHAR_2:
                add_search_char(
                    search,
                    &length,
                    '2'
                );
                break;

            case KEY_CHAR_3:
                add_search_char(
                    search,
                    &length,
                    '3'
                );
                break;

            case KEY_CHAR_4:
                add_search_char(
                    search,
                    &length,
                    '4'
                );
                break;

            case KEY_CHAR_5:
                add_search_char(
                    search,
                    &length,
                    '5'
                );
                break;

            case KEY_CHAR_6:
                add_search_char(
                    search,
                    &length,
                    '6'
                );
                break;

            case KEY_CHAR_7:
                add_search_char(
                    search,
                    &length,
                    '7'
                );
                break;

            case KEY_CHAR_8:
                add_search_char(
                    search,
                    &length,
                    '8'
                );
                break;

            case KEY_CHAR_9:
                add_search_char(
                    search,
                    &length,
                    '9'
                );
                break;


            case KEY_CHAR_A:
                add_search_char(search, &length, 'A');
                break;

            case KEY_CHAR_B:
                add_search_char(search, &length, 'B');
                break;

            case KEY_CHAR_C:
                add_search_char(search, &length, 'C');
                break;

            case KEY_CHAR_D:
                add_search_char(search, &length, 'D');
                break;

            case KEY_CHAR_E:
                add_search_char(search, &length, 'E');
                break;

            case KEY_CHAR_F:
                add_search_char(search, &length, 'F');
                break;

            case KEY_CHAR_G:
                add_search_char(search, &length, 'G');
                break;

            case KEY_CHAR_H:
                add_search_char(search, &length, 'H');
                break;

            case KEY_CHAR_I:
                add_search_char(search, &length, 'I');
                break;

            case KEY_CHAR_J:
                add_search_char(search, &length, 'J');
                break;

            case KEY_CHAR_K:
                add_search_char(search, &length, 'K');
                break;

            case KEY_CHAR_L:
                add_search_char(search, &length, 'L');
                break;

            case KEY_CHAR_M:
                add_search_char(search, &length, 'M');
                break;

            case KEY_CHAR_N:
                add_search_char(search, &length, 'N');
                break;

            case KEY_CHAR_O:
                add_search_char(search, &length, 'O');
                break;

            case KEY_CHAR_P:
                add_search_char(search, &length, 'P');
                break;

            case KEY_CHAR_Q:
                add_search_char(search, &length, 'Q');
                break;

            case KEY_CHAR_R:
                add_search_char(search, &length, 'R');
                break;

            case KEY_CHAR_S:
                add_search_char(search, &length, 'S');
                break;

            case KEY_CHAR_T:
                add_search_char(search, &length, 'T');
                break;

            case KEY_CHAR_U:
                add_search_char(search, &length, 'U');
                break;

            case KEY_CHAR_V:
                add_search_char(search, &length, 'V');
                break;

            case KEY_CHAR_W:
                add_search_char(search, &length, 'W');
                break;

            case KEY_CHAR_X:
                add_search_char(search, &length, 'X');
                break;

            case KEY_CHAR_Y:
                add_search_char(search, &length, 'Y');
                break;

            case KEY_CHAR_Z:
                add_search_char(search, &length, 'Z');
                break;


            case KEY_CTRL_DEL:

                if (length > 0)
                {
                    length--;

                    search[length] =
                        '\0';
                }

                break;


            case KEY_CTRL_UP:

                if (selected > 0)
                {
                    selected--;
                }

                break;


            case KEY_CTRL_DOWN:

                if (
                    result_count > 0 &&
                    selected <
                    result_count - 1
                )
                {
                    selected++;
                }

                break;


            case KEY_CTRL_EXE:

                if (result_count > 0)
                {
                    return results[selected];
                }

                break;


            case KEY_CTRL_EXIT:

                return -1;


            default:

                break;
        }
    }
}


/*
 * ------------------------------------------------------------
 * Draw Pokemon list.
 * ------------------------------------------------------------
 */

void draw_list(
    int selected
)
{
    int first;
    int i;
    int number;
    int y;

    char line[32];


    /*
     * Make sure selected is valid.
     */

    if (selected < 0)
    {
        selected = 0;
    }


    if (selected >= POKEMON_COUNT)
    {
        selected =
            POKEMON_COUNT - 1;
    }


    /*
     * Put selected Pokemon near the middle.
     */

    first =
        selected - 2;


    if (first < 0)
    {
        first = 0;
    }


    if (
        first >
        POKEMON_COUNT - VISIBLE_LIST
    )
    {
        first =
            POKEMON_COUNT - VISIBLE_LIST;
    }


    if (first < 0)
    {
        first = 0;
    }


    clear_screen();


    draw_header(
        "POKEDEX - Generation 1-3"
    );


    /*
     * Draw five Pokemon.
     */

    for (
        i = 0;
        i < VISIBLE_LIST;
        i++
    )
    {
        number =
            first + i;


        if (
            number >=
            POKEMON_COUNT
        )
        {
            break;
        }


        y =
            9 +
            i * 10;


        /*
         * Highlight selected Pokemon.
         */

        if (
            number ==
            selected
        )
        {
            Bdisp_AreaReverseVRAM(
                0,
                y,
                127,
                y + 8
            );
        }


        /*
         * Number.

         * Array index 0 = #001
         * Array index 268 = #269
         * Array index 269 = #270
         * Array index 385 = #386
         */

        sprintf(
            line,
            "#%03d",
            number + 1
        );


        print_text(
            1,
            y,
            line
        );


        /*
         * Name.
         */

        print_text(
            24,
            y,
            pokemon[number].name
        );
    }


    print_text(
        0,
        59,
        "UP/DN Browse ALPHA Search"
    );


    Bdisp_PutDisp_DD();
}


/*
 * ------------------------------------------------------------
 * Draw Pokemon detail screen.
 * ------------------------------------------------------------
 */

int draw_detail(
    int selected,
    int scroll
)
{
    char line[40];

    const char *description;
    const char *evolution;

    int description_lines;
    int evolution_lines;
    int total_lines;

    int content_line;
    int visible_line;


    /*
     * Safety check.
     */

    if (selected < 0)
    {
        selected = 0;
    }


    if (selected >= POKEMON_COUNT)
    {
        selected =
            POKEMON_COUNT - 1;
    }


    /*
     * Get Pokemon text.
     */

    description =
        pokemon[selected].description;

    evolution =
        pokemon[selected].evolution;


    /*
     * Count wrapped lines.
     */

    description_lines =
        count_lines(
            description
        );


    evolution_lines =
        count_lines(
            evolution
        );


    total_lines =
        description_lines +
        1 +
        evolution_lines;


    /*
     * Clamp scroll.

     */

    if (scroll < 0)
    {
        scroll = 0;
    }


    if (
        total_lines <=
        DETAIL_LINES
    )
    {
        scroll = 0;
    }
    else if (
        scroll >
        total_lines -
        DETAIL_LINES
    )
    {
        scroll =
            total_lines -
            DETAIL_LINES;
    }


    clear_screen();


    /*
     * Header.
     */

    sprintf(
        line,
        "#%03d %s",
        selected + 1,
        pokemon[selected].name
    );


    draw_header(
        line
    );


    /*
     * Type 1.
     */

    sprintf(
        line,
        "TYPE: %s",
        pokemon[selected].type1
    );


    print_text(
        0,
        10,
        line
    );


    /*
     * Type 2.
     */

    if (
        pokemon[selected].type2[0] !=
        '\0'
    )
    {
        sprintf(
            line,
            "TYPE2: %s",
            pokemon[selected].type2
        );


        print_text(
            0,
            17,
            line
        );
    }


    /*
     * Reset text pointers.
     */

    description =
        pokemon[selected].description;

    evolution =
        pokemon[selected].evolution;


    /*
     * Skip content according to scroll.

     */

    content_line = 0;


    while (
        content_line <
        scroll
    )
    {
        if (
            content_line <
            description_lines
        )
        {
            description =
                skip_line(
                    description
                );
        }
        else if (
            content_line ==
            description_lines
        )
        {
            /*
             * EVOLVE heading.
             */
        }
        else
        {
            evolution =
                skip_line(
                    evolution
                );
        }


        content_line++;
    }


    /*
     * Draw visible content.
     */

    visible_line = 0;


    while (
        visible_line <
        DETAIL_LINES &&
        content_line <
        total_lines
    )
    {
        if (
            content_line <
            description_lines
        )
        {
            description =
                print_wrapped_line(
                    description,
                    0,
                    25 +
                    visible_line * 7
                );
        }
        else if (
            content_line ==
            description_lines
        )
        {
            print_text(
                0,
                25 +
                visible_line * 7,
                "EVOLVE:"
            );
        }
        else
        {
            evolution =
                print_wrapped_line(
                    evolution,
                    0,
                    25 +
                    visible_line * 7
                );
        }


        content_line++;

        visible_line++;
    }


    /*
     * Scroll indicators.
     */

    if (scroll > 0)
    {
        print_text(
            120,
            10,
            "^"
        );
    }


    if (
        total_lines >
        DETAIL_LINES &&
        scroll <
        total_lines -
        DETAIL_LINES
    )
    {
        print_text(
            120,
            17,
            "v"
        );
    }


    /*
     * Controls.
     */

    print_text(
        0,
        59,
        "UP/DN Scroll EXIT"
    );


    Bdisp_PutDisp_DD();


    return total_lines;
}


/*
 * ------------------------------------------------------------
 * Main program.
 * ------------------------------------------------------------
 */

int AddIn_main(
    int isAppli,
    unsigned short OptionNum
)
{
    unsigned int key;

    int selected;
    int detail;
    int running;

    int scroll;
    int total_lines;

    int search_result;


    /*
     * Avoid compiler warnings.
     */

    (void)isAppli;
    (void)OptionNum;


    /*
     * Initial state.
     *
     * selected uses a zero-based array index.
     *
     * 0   = #001 Bulbasaur
     * 268 = #269 Dustox
     * 269 = #270 Lotad
     * 385 = #386 Deoxys
     */

    selected = 0;

    detail = 0;

    running = 1;

    scroll = 0;

    total_lines = 0;


    /*
     * Main loop.
     */

    while (running)
    {
        /*
         * ====================================================
         * LIST SCREEN
         * ====================================================
         */

        if (!detail)
        {
            draw_list(
                selected
            );


            GetKey(
                &key
            );


            switch (key)
            {
                /*
                 * Move up.
                 */

                case KEY_CTRL_UP:

                    if (selected > 0)
                    {
                        selected--;
                    }

                    break;


                /*
                 * Move down.
                 */

                case KEY_CTRL_DOWN:

                    if (
                        selected <
                        POKEMON_COUNT - 1
                    )
                    {
                        selected++;
                    }

                    break;


                /*
                 * Open detail.

                 */

                case KEY_CTRL_EXE:

                    detail = 1;

                    scroll = 0;

                    break;


                /*
                 * Search.

                 */

                case KEY_CTRL_ALPHA:

                    search_result =
                        search_screen();


                    if (
                        search_result >= 0
                    )
                    {
                        selected =
                            search_result;
                    }

                    break;


                /*
                 * Exit.

                 */

                case KEY_CTRL_EXIT:

                    running = 0;

                    break;


                default:

                    break;
            }
        }


        /*
         * ====================================================
         * DETAIL SCREEN
         * ====================================================
         */

        else
        {
            total_lines =
                draw_detail(
                    selected,
                    scroll
                );


            GetKey(
                &key
            );


            switch (key)
            {
                /*
                 * Scroll up.
                 */

                case KEY_CTRL_UP:

                    if (scroll > 0)
                    {
                        scroll--;
                    }

                    break;


                /*
                 * Scroll down.
                 */

                case KEY_CTRL_DOWN:

                    if (
                        total_lines >
                        DETAIL_LINES
                    )
                    {
                        if (
                            scroll <
                            total_lines -
                            DETAIL_LINES
                        )
                        {
                            scroll++;
                        }
                    }

                    break;


                /*
                 * Return to list.

                 */

                case KEY_CTRL_EXIT:

                    detail = 0;

                    scroll = 0;

                    break;


                default:

                    break;
            }
        }
    }


    /*
     * Clear screen before exiting.

     */

    clear_screen();

    Bdisp_PutDisp_DD();


    return 1;
}


/*
 * ------------------------------------------------------------
 * Legacy SDK startup code.
 * ------------------------------------------------------------
 */

#pragma section _BR_Size

unsigned long BR_Size;

#pragma section


#pragma section _TOP

int InitializeSystem(
    int isAppli,
    unsigned short OptionNum
)
{
    return INIT_ADDIN_APPLICATION(
        isAppli,
        OptionNum
    );
}

#pragma section
