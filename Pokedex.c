#include <fxlib.h>
#include <stdio.h>
#include "pokemon.h"

#define VISIBLE_LIST 5
#define TEXT_WIDTH 20
#define DETAIL_LINES 5

/*
 * ------------------------------------------------------------
 * Basic display functions
 * ------------------------------------------------------------
 */

static void clear_screen(void)
{
    Bdisp_AllClr_DDVRAM();
}


static void print_text(
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


static void draw_header(
    const char *text
)
{
    print_text(0, 0, text);

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

static int make_line(
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
            last_space = length;

        length++;
    }

    /*
     * Break at the last space if possible.
     */
    if (
        text[length] != '\0' &&
        last_space > 0
    )
    {
        length = last_space;
    }

    /*
     * Copy characters.
     */
    for (i = 0; i < length; i++)
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

static const char *skip_line(
    const char *text
)
{
    char line[TEXT_WIDTH + 1];
    int used;

    if (*text == '\0')
        return text;

    used =
        make_line(
            text,
            line
        );

    if (used <= 0)
        return text + 1;

    text += used;

    /*
     * Remove spaces at beginning of next line.
     */
    while (*text == ' ')
        text++;

    return text;
}


/*
 * ------------------------------------------------------------
 * Print one wrapped line.
 * ------------------------------------------------------------
 */

static const char *print_wrapped_line(
    const char *text,
    int x,
    int y
)
{
    char line[TEXT_WIDTH + 1];
    int used;

    if (*text == '\0')
        return text;

    used =
        make_line(
            text,
            line
        );

    if (used <= 0)
        return text + 1;

    print_text(
        x,
        y,
        line
    );

    text += used;

    while (*text == ' ')
        text++;

    return text;
}


/*
 * ------------------------------------------------------------
 * Count wrapped lines.
 * ------------------------------------------------------------
 */

static int count_lines(
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
            break;

        text += used;

        while (*text == ' ')
            text++;

        count++;
    }

    return count;
}


/*
 * ------------------------------------------------------------
 * Draw Pokemon list.
 * ------------------------------------------------------------
 */

static void draw_list(
    int selected
)
{
    int first;
    int i;
    int number;
    int y;

    char line[32];

    /*
     * Center selected Pokemon when possible.
     */
    first =
        selected - 2;

    if (first < 0)
        first = 0;

    if (
        first >
        POKEMON_COUNT - VISIBLE_LIST
    )
    {
        first =
            POKEMON_COUNT -
            VISIBLE_LIST;
    }

    if (first < 0)
        first = 0;

    clear_screen();

    draw_header(
        "POKEDEX - GEN 1"
    );

    /*
     * Draw five Pokemon.
     */
    for (i = 0; i < VISIBLE_LIST; i++)
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
         * Highlight selected entry.
         */
        if (number == selected)
        {
            Bdisp_AreaReverseVRAM(
                0,
                y,
                127,
                y + 8
            );
        }

        /*
         * Pokemon number.
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
         * Pokemon name.
         */
        print_text(
            24,
            y,
            pokemon[number].name
        );
    }

    /*
     * Controls.
     */
    print_text(
        0,
        59,
        "UP/DN Browse EXE View"
    );

    Bdisp_PutDisp_DD();
}


/*
 * ------------------------------------------------------------
 * Draw Pokemon details.
 *
 * Content consists of:
 *
 *   description
 *   EVOLVE:
 *   evolution
 *
 * The type information remains fixed.
 * ------------------------------------------------------------
 */

static int draw_detail(
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
     * Count description and evolution lines.
     */
    description_lines =
        count_lines(
            pokemon[selected].description
        );

    evolution_lines =
        count_lines(
            pokemon[selected].evolution
        );

    /*
     * One line is used for EVOLVE.
     */
    total_lines =
        description_lines +
        1 +
        evolution_lines;


    /*
     * Clamp scrolling.
     */
    if (scroll < 0)
        scroll = 0;

    if (total_lines <= DETAIL_LINES)
    {
        scroll = 0;
    }
    else
    {
        if (
            scroll >
            total_lines - DETAIL_LINES
        )
        {
            scroll =
                total_lines -
                DETAIL_LINES;
        }
    }


    /*
     * Clear screen.
     */
    clear_screen();


    /*
     * --------------------------------------------------------
     * Header
     * --------------------------------------------------------
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
     * --------------------------------------------------------
     * Type
     * --------------------------------------------------------
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
     * --------------------------------------------------------
     * Set up text pointers.
     * --------------------------------------------------------
     */

    description =
        pokemon[selected].description;

    evolution =
        pokemon[selected].evolution;


    /*
     * --------------------------------------------------------
     * Skip content until the requested scroll position.
     * --------------------------------------------------------
     */

    content_line = 0;

    while (
        content_line < scroll
    )
    {
        /*
         * Description lines.
         */
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

        /*
         * EVOLVE heading.
         */
        else if (
            content_line ==
            description_lines
        )
        {
            /*
             * Nothing to skip.
             */
        }

        /*
         * Evolution lines.
         */
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
     * --------------------------------------------------------
     * Draw visible content.
     * --------------------------------------------------------
     */

    visible_line = 0;

    while (
        visible_line < DETAIL_LINES &&
        content_line < total_lines
    )
    {
        /*
         * Description.
         */
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

        /*
         * EVOLVE heading.
         */
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

        /*
         * Evolution.
         */
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
     * --------------------------------------------------------
     * Scroll indicators.
     * --------------------------------------------------------
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
        total_lines > DETAIL_LINES &&
        scroll <
        total_lines - DETAIL_LINES
    )
    {
        print_text(
            120,
            17,
            "v"
        );
    }


    /*
     * --------------------------------------------------------
     * Controls.
     * --------------------------------------------------------
     */

    print_text(
        0,
        59,
        "UP/DN Scroll EXIT"
    );


    /*
     * Send display to screen.
     */
    Bdisp_PutDisp_DD();

    return total_lines;
}


/*
 * ------------------------------------------------------------
 * Main program
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


    /*
     * Prevent unused parameter warnings.
     */
    (void)isAppli;
    (void)OptionNum;


    selected = 0;
    detail = 0;
    running = 1;

    scroll = 0;
    total_lines = 0;


    /*
     * --------------------------------------------------------
     * Main loop.
     * --------------------------------------------------------
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
                 * Open Pokemon.
                 */
                case KEY_CTRL_EXE:

                    detail = 1;
                    scroll = 0;

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
     * --------------------------------------------------------
     * Clear screen before exiting.
     * --------------------------------------------------------
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
