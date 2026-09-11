#ifndef POKEMON_H
#define POKEMON_H

#define POKEMON_COUNT 386

typedef struct
{
    const char *name;
    const char *type1;
    const char *type2;
    const char *description;
    const char *evolution;
} Pokemon;

static const Pokemon pokemon[POKEMON_COUNT] =
{
    {"Bulbasaur","Grass","Poison",
     "A Grass and Poison type Pokemon with a large seed growing on its back. The seed absorbs sunlight and provides energy for growth.",
     "Bulbasaur > Ivysaur > Venusaur"},

    {"Ivysaur","Grass","Poison",
     "The seed on its back has grown into a large plant. It becomes stronger as the plant absorbs sunlight and nutrients.",
     "Bulbasaur > Ivysaur > Venusaur"},

    {"Venusaur","Grass","Poison",
     "A powerful Grass and Poison type with a huge flower on its back. Its flower absorbs sunlight and releases a pleasant fragrance.",
     "Bulbasaur > Ivysaur > Venusaur"},

    {"Charmander","Fire","",
     "A Fire type Pokemon whose tail burns with a flame. The flame shows its vitality and becomes stronger as Charmander grows.",
     "Charmander > Charmeleon > Charizard"},

    {"Charmeleon","Fire","",
     "A fierce Fire type Pokemon with sharp claws and a burning tail. It becomes aggressive when fighting powerful opponents.",
     "Charmander > Charmeleon > Charizard"},

    {"Charizard","Fire","Flying",
     "A powerful dragon-like Pokemon that can fly and breathe intense flames. It seeks out strong opponents and can melt huge boulders.",
     "Charmander > Charmeleon > Charizard"},

    {"Squirtle","Water","",
     "A small Water type turtle Pokemon. It withdraws into its hard shell when threatened and uses water attacks to defend itself.",
     "Squirtle > Wartortle > Blastoise"},

    {"Wartortle","Water","",
     "A Water type turtle with a large fluffy tail and ears. It can swim quickly and uses its tail to balance while moving through water.",
     "Squirtle > Wartortle > Blastoise"},

    {"Blastoise","Water","",
     "A heavily armored Water type Pokemon with two powerful cannons on its shell. The cannons can fire concentrated blasts of water.",
     "Squirtle > Wartortle > Blastoise"},

    {"Caterpie","Bug","",
     "A small Bug type caterpillar Pokemon. It has a strong appetite and can quickly eat leaves using its powerful jaws.",
     "Caterpie > Metapod > Butterfree"},

    {"Metapod","Bug","",
     "A Bug type Pokemon protected by a hard green shell. It remains mostly still while its body develops for evolution.",
     "Caterpie > Metapod > Butterfree"},

    {"Butterfree","Bug","Flying",
     "A Bug and Flying type Pokemon with large wings covered in scales. It spreads powder from its wings to protect itself from attackers.",
     "Caterpie > Metapod > Butterfree"},

    {"Weedle","Bug","Poison",
     "A small Bug and Poison type Pokemon with a poisonous horn on its head. It feeds on leaves and often hides in forests.",
     "Weedle > Kakuna > Beedrill"},

    {"Kakuna","Bug","Poison",
     "A Bug and Poison type Pokemon that spends most of its time hanging from trees. Its hard body protects it while it prepares to evolve.",
     "Weedle > Kakuna > Beedrill"},

    {"Beedrill","Bug","Poison",
     "A dangerous Bug and Poison type with three poisonous stingers. It can attack rapidly and becomes especially aggressive when its nest is threatened.",
     "Weedle > Kakuna > Beedrill"},

    {"Pidgey","Normal","Flying",
     "A small Normal and Flying type bird Pokemon. It has excellent senses and can quickly detect approaching enemies or predators.",
     "Pidgey > Pidgeotto > Pidgeot"},

    {"Pidgeotto","Normal","Flying",
     "A larger Normal and Flying type bird that fiercely protects its territory. Its sharp claws and strong wings make it a capable hunter.",
     "Pidgey > Pidgeotto > Pidgeot"},

    {"Pidgeot","Normal","Flying",
     "A powerful bird Pokemon capable of flying at extremely high speeds. Its broad wings and strong muscles allow it to travel great distances.",
     "Pidgey > Pidgeotto > Pidgeot"},

    {"Rattata","Normal","",
     "A small Normal type Pokemon with strong front teeth. It can live almost anywhere and constantly gnaws on objects to keep its teeth sharp.",
     "Rattata > Raticate"},

    {"Raticate","Normal","",
     "A larger Normal type rodent with extremely strong teeth. Its sharp incisors can chew through many hard materials and obstacles.",
     "Rattata > Raticate"},

    {"Spearow","Normal","Flying",
     "An aggressive Normal and Flying type bird Pokemon. It has a loud cry and can fly quickly while attacking enemies with its beak.",
     "Spearow > Fearow"},

    {"Fearow","Normal","Flying",
     "A large Normal and Flying type bird with enormous wings. It can remain airborne for long periods and attacks using its powerful beak.",
     "Spearow > Fearow"},

    {"Ekans","Poison","",
     "A Poison type snake Pokemon that moves quietly through grass. It can swallow prey whole and becomes longer as it grows.",
     "Ekans > Arbok"},

    {"Arbok","Poison","",
     "A large Poison type cobra Pokemon with a distinctive hood pattern. Its markings can intimidate enemies and it uses powerful coils to restrain prey.",
     "Ekans > Arbok"},

    {"Pikachu","Electric","",
     "An Electric type mouse Pokemon that stores electricity in special cheek sacs. It can release powerful electrical shocks when threatened or excited.",
     "Pikachu > Raichu"},

    {"Raichu","Electric","",
     "A powerful Electric type mouse Pokemon capable of storing large amounts of electricity. Its long tail helps discharge electrical energy into the ground.",
     "Pikachu > Raichu"},

    {"Sandshrew","Ground","",
     "A Ground type Pokemon covered in tough scales that protect it from the desert environment. It curls into a ball to defend itself.",
     "Sandshrew > Sandslash"},

    {"Sandslash","Ground","",
     "A Ground type Pokemon with sharp claws and spines along its back. It can dig quickly and uses its claws to defend itself and attack opponents.",
     "Sandshrew > Sandslash"},

    {"Nidoran F","Poison","",
     "A small Poison type Pokemon with poisonous horns and sharp ears. It is cautious and can defend itself using venomous attacks.",
     "Nidoran F > Nidorina > Nidoqueen"},

    {"Nidorina","Poison","",
     "A Poison type Pokemon with a powerful sense of smell. It becomes defensive when threatened and uses its poisonous abilities to protect itself.",
     "Nidoran F > Nidorina > Nidoqueen"},

    {"Nidoqueen","Poison","Ground",
     "A large Poison and Ground type Pokemon with thick, armor-like skin. It is protective of its young and can use its powerful body in battle.",
     "Nidoran F > Nidorina > Nidoqueen"},

    {"Nidoran M","Poison","",
     "A small Poison type Pokemon covered with poisonous spikes. Its large ears help it detect danger and it can inject venom with its horn.",
     "Nidoran M > Nidorino > Nidoking"},

    {"Nidorino","Poison","",
     "A Poison type Pokemon with a large poisonous horn. It is aggressive and can charge opponents using its powerful head and horn.",
     "Nidoran M > Nidorino > Nidoking"},

    {"Nidoking","Poison","Ground",
     "A powerful Poison and Ground type Pokemon covered in thick scales and spikes. Its enormous horn can deliver poisonous attacks.",
     "Nidoran M > Nidorino > Nidoking"},

    {"Clefairy","Normal","",
     "A mysterious Normal type Pokemon associated with the moon. It is rarely seen in the wild and is known for its charming and playful behavior.",
     "Clefairy > Clefable"},

    {"Clefable","Normal","",
     "A graceful Normal type Pokemon with excellent hearing. Its sensitive ears allow it to detect distant sounds and it tends to avoid humans.",
     "Clefairy > Clefable"},

    {"Vulpix","Fire","",
     "A Fire type fox Pokemon born with a single tail. As it grows, its tail splits into multiple beautiful tails.",
     "Vulpix > Ninetales"},

    {"Ninetales","Fire","",
     "An elegant Fire type fox Pokemon with nine beautiful tails. It is intelligent and mysterious and is said to live for many years.",
     "Vulpix > Ninetales"},

    {"Jigglypuff","Normal","",
     "A round Normal type Pokemon famous for its soothing singing voice. Its song can cause anyone listening to fall asleep.",
     "Jigglypuff > Wigglytuff"},

    {"Wigglytuff","Normal","",
     "A large Normal type Pokemon with a soft and elastic body. It can inflate itself to enormous size and has a gentle personality.",
     "Jigglypuff > Wigglytuff"},

    {"Zubat","Poison","Flying",
     "A Poison and Flying type bat Pokemon that lives in dark caves. It has poor eyesight and uses sound waves to navigate.",
     "Zubat > Golbat"},

    {"Golbat","Poison","Flying",
     "A Poison and Flying type bat that uses its large fangs to drain blood from prey. It is most active in dark areas.",
     "Zubat > Golbat"},

    {"Oddish","Grass","Poison",
     "A Grass and Poison type Pokemon that hides underground during the day. At night it comes out and wanders while scattering seeds.",
     "Oddish > Gloom > Vileplume"},

    {"Gloom","Grass","Poison",
     "A Grass and Poison type Pokemon with a large flower growing from its head. The flower produces a strong and unpleasant smell.",
     "Oddish > Gloom > Vileplume"},

    {"Vileplume","Grass","Poison",
     "A Grass and Poison type Pokemon with one of the largest flowers in its species. It can scatter poisonous pollen over a wide area.",
     "Oddish > Gloom > Vileplume"},

    {"Paras","Bug","Grass",
     "A Bug and Grass type Pokemon covered by mushrooms growing from its back. The mushrooms absorb nutrients while Paras feeds underground.",
     "Paras > Parasect"},

    {"Parasect","Bug","Grass",
     "A Bug and Grass type whose mushroom has grown extremely large. The mushroom controls much of its body and releases spores into the air.",
     "Paras > Parasect"},

    {"Venonat","Bug","Poison",
     "A Bug and Poison type Pokemon covered in fine hairs. Its large compound eyes allow it to see in darkness and locate small prey.",
     "Venonat > Venomoth"},

    {"Venomoth","Bug","Poison",
     "A Bug and Poison type moth Pokemon with large wings. It can scatter poisonous scales that cause opponents to become weakened.",
     "Venonat > Venomoth"},

    {"Diglett","Ground","",
     "A small Ground type Pokemon that spends most of its life underground. It digs through soil and leaves behind tunnels.",
     "Diglett > Dugtrio"},

    {"Dugtrio","Ground","",
     "A Ground type Pokemon made up of three Diglett working together. It can dig through soil at remarkable speed.",
     "Diglett > Dugtrio"},

    {"Meowth","Normal","",
     "A Normal type cat Pokemon attracted to shiny objects and coins. It is mostly active at night and enjoys collecting valuable items.",
     "Meowth > Persian"},

    {"Persian","Normal","",
     "A graceful Normal type cat Pokemon with sharp claws and great agility. It moves silently and can suddenly attack its target.",
     "Meowth > Persian"},

    {"Psyduck","Water","",
     "A Water type duck Pokemon that frequently suffers from headaches. When its headaches become severe, mysterious psychic powers appear.",
     "Psyduck > Golduck"},

    {"Golduck","Water","",
     "A fast Water type swimmer with strong physical abilities. Its webbed limbs allow it to move rapidly through rivers and lakes.",
     "Psyduck > Golduck"},

    {"Mankey","Fighting","",
     "A Fighting type monkey Pokemon with a short temper. It becomes enraged easily and may attack anything nearby when angry.",
     "Mankey > Primeape"},

    {"Primeape","Fighting","",
     "A powerful Fighting type Pokemon that is almost constantly angry. Its rage gives it tremendous strength and causes it to attack relentlessly.",
     "Mankey > Primeape"},

    {"Growlithe","Fire","",
     "A loyal Fire type puppy Pokemon with an excellent sense of smell. It is brave and can protect people or territory with powerful attacks.",
     "Growlithe > Arcanine"},

    {"Arcanine","Fire","",
     "A majestic Fire type Pokemon known for its speed and endurance. It has been admired for centuries and can run great distances.",
     "Growlithe > Arcanine"},

    {"Poliwag","Water","",
     "A Water type tadpole Pokemon with a smooth body. Its transparent skin reveals its internal organs and its strong tail helps it swim.",
     "Poliwag > Poliwhirl > Poliwrath"},

    {"Poliwhirl","Water","",
     "A Water type Pokemon with a distinctive spiral pattern on its belly. The pattern can mesmerize opponents while it prepares an attack.",
     "Poliwag > Poliwhirl > Poliwrath"},

    {"Poliwrath","Water","Fighting",
     "A Water and Fighting type Pokemon with powerful muscles. It is an excellent swimmer and can travel through strong currents with ease.",
     "Poliwag > Poliwhirl > Poliwrath"},

    {"Abra","Psychic","",
     "A Psychic type Pokemon that spends much of its time sleeping. Even while asleep it can use teleportation to escape danger.",
     "Abra > Kadabra > Alakazam"},

    {"Kadabra","Psychic","",
     "A Psychic type Pokemon with powerful mental abilities. It carries a spoon that helps focus its psychic energy during battle.",
     "Abra > Kadabra > Alakazam"},

    {"Alakazam","Psychic","",
     "A Psychic type Pokemon with extraordinary intelligence and immense mental power. Its brain continues to develop throughout its life.",
     "Abra > Kadabra > Alakazam"},

    {"Machop","Fighting","",
     "A Fighting type Pokemon with tremendous physical strength despite its small size. It constantly trains its muscles to become stronger.",
     "Machop > Machoke > Machamp"},

    {"Machoke","Fighting","",
     "A muscular Fighting type Pokemon that wears a special belt to control its enormous strength. It can perform powerful physical attacks.",
     "Machop > Machoke > Machamp"},

    {"Machamp","Fighting","",
     "A powerful Fighting type Pokemon with four muscular arms. It can throw multiple punches and perform powerful grappling techniques.",
     "Machop > Machoke > Machamp"},

    {"Bellsprout","Grass","Poison",
     "A Grass and Poison type plant Pokemon with a flexible body. It can sway in the wind and uses its vines to capture small prey.",
     "Bellsprout > Weepinbell > Victreebel"},

    {"Weepinbell","Grass","Poison",
     "A Grass and Poison type Pokemon shaped like a hanging plant. It uses acidic fluids and sharp leaves to weaken its prey.",
     "Bellsprout > Weepinbell > Victreebel"},

    {"Victreebel","Grass","Poison",
     "A Grass and Poison type Pokemon resembling a large pitcher plant. It lures prey with a sweet smell before trapping it inside its body.",
     "Bellsprout > Weepinbell > Victreebel"},

    {"Tentacool","Water","Poison",
     "A Water and Poison type jellyfish Pokemon commonly found in oceans. Its body contains poisonous tentacles used for defense.",
     "Tentacool > Tentacruel"},

    {"Tentacruel","Water","Poison",
     "A large Water and Poison type jellyfish with many tentacles. It can extend its tentacles to capture prey and defend itself.",
     "Tentacool > Tentacruel"},

    {"Geodude","Rock","Ground",
     "A Rock and Ground type Pokemon that resembles a living boulder. It is commonly found in mountains and can use its rocky body for defense.",
     "Geodude > Graveler > Golem"},

    {"Graveler","Rock","Ground",
     "A Rock and Ground type Pokemon with a heavy, rugged body. It often rolls down mountainsides and crushes obstacles in its path.",
     "Geodude > Graveler > Golem"},

    {"Golem","Rock","Ground",
     "A huge Rock and Ground type Pokemon protected by an extremely hard shell. It can roll like a boulder and withstand powerful attacks.",
     "Geodude > Graveler > Golem"},

    {"Ponyta","Fire","",
     "A Fire type horse Pokemon born with a flaming mane and tail. It becomes faster and stronger as it grows and trains its legs.",
     "Ponyta > Rapidash"},

    {"Rapidash","Fire","",
     "A fast Fire type horse Pokemon with a blazing mane. It can reach extremely high speeds while running across open ground.",
     "Ponyta > Rapidash"},

    {"Slowpoke","Water","Psychic",
     "A Water and Psychic type Pokemon known for its slow reactions. It often spends its time relaxing near water and seems unaware of danger.",
     "Slowpoke > Slowbro"},

    {"Slowbro","Water","Psychic",
     "A Water and Psychic type Pokemon with a Shellder attached to its tail. The Shellder changes its behavior and gives it greater defensive strength.",
     "Slowpoke > Slowbro"},

    {"Magnemite","Electric","",
     "An Electric type Pokemon that floats using electromagnetic forces. It can attract metal objects and generate powerful electrical attacks.",
     "Magnemite > Magneton"},

    {"Magneton","Electric","",
     "An Electric type Pokemon formed from three Magnemite. The combined magnetic energy allows it to generate powerful electrical fields.",
     "Magnemite > Magneton"},

    {"Farfetchd","Normal","Flying",
     "A Normal and Flying type bird Pokemon that carries a plant stalk. It uses the stalk as a weapon and becomes difficult to find in the wild.",
     "Farfetchd"},

    {"Doduo","Normal","Flying",
     "A Normal and Flying type bird with two heads. Both heads work together to maintain balance while Doduo runs at high speed.",
     "Doduo > Dodrio"},

    {"Dodrio","Normal","Flying",
     "A Normal and Flying type bird with three heads. Each head can think independently while all three cooperate to run and fight.",
     "Doduo > Dodrio"},

    {"Seel","Water","",
     "A Water type seal Pokemon that prefers cold ocean water. Its thick body and flippers allow it to swim comfortably in freezing seas.",
     "Seel > Dewgong"},

    {"Dewgong","Water","Ice",
     "A Water and Ice type sea lion Pokemon covered in thick white fur. Its body is well adapted to extremely cold ocean environments.",
     "Seel > Dewgong"},

    {"Grimer","Poison","",
     "A Poison type Pokemon made from polluted sludge. It thrives in dirty environments and leaves toxic residue wherever it travels.",
     "Grimer > Muk"},

    {"Muk","Poison","",
     "A huge Poison type mass of toxic sludge. Its body is extremely poisonous and can contaminate areas simply by passing through them.",
     "Grimer > Muk"},

    {"Shellder","Water","",
     "A Water type Pokemon protected by a hard shell. Its shell closes tightly when threatened and protects its soft body inside.",
     "Shellder > Cloyster"},

    {"Cloyster","Water","Ice",
     "A Water and Ice type Pokemon surrounded by an extremely hard shell. It can launch sharp spikes and defend itself with powerful attacks.",
     "Shellder > Cloyster"},

    {"Gastly","Ghost","Poison",
     "A Ghost and Poison type Pokemon made mostly of poisonous gas. It can hide in darkness and slowly weaken opponents by surrounding them.",
     "Gastly > Haunter > Gengar"},

    {"Haunter","Ghost","Poison",
     "A Ghost and Poison type Pokemon that hides in dark places. It can pass through walls and enjoys frightening unsuspecting people.",
     "Gastly > Haunter > Gengar"},

    {"Gengar","Ghost","Poison",
     "A Ghost and Poison type shadow Pokemon known for its mischievous behavior. It hides in darkness and enjoys surprising its targets.",
     "Gastly > Haunter > Gengar"},

    {"Onix","Rock","Ground",
     "A massive Rock and Ground type serpent with a body made of connected rocks. It burrows underground and becomes longer as it grows.",
     "Onix"},

    {"Drowzee","Psychic","",
     "A Psychic type Pokemon that feeds on dreams. It can make people sleepy and is often found near people who are sleeping.",
     "Drowzee > Hypno"},

    {"Hypno","Psychic","",
     "A Psychic type Pokemon that uses a pendulum to hypnotize targets. It can influence dreams and put opponents into a deep sleep.",
     "Drowzee > Hypno"},

    {"Krabby","Water","",
     "A Water type crab Pokemon with powerful pincers. It lives near beaches and can use its claws both for fighting and gathering food.",
     "Krabby > Kingler"},

    {"Kingler","Water","",
     "A large Water type crab with one enormous claw. The oversized claw has tremendous crushing power but is difficult for Kingler to control.",
     "Krabby > Kingler"},

    {"Voltorb","Electric","",
     "An Electric type Pokemon that resembles a Poke Ball. It stores electrical energy and may suddenly explode when disturbed.",
     "Voltorb > Electrode"},

    {"Electrode","Electric","",
     "A powerful Electric type Pokemon resembling an upside-down Poke Ball. It stores enormous amounts of electricity and can explode suddenly.",
     "Voltorb > Electrode"},

    {"Exeggcute","Grass","Psychic",
     "A Grass and Psychic type Pokemon made of six seed-like creatures. The group communicates using psychic signals and stays together.",
     "Exeggcute > Exeggutor"},

    {"Exeggutor","Grass","Psychic",
     "A tall Grass and Psychic type Pokemon resembling a palm tree. Its multiple heads can think independently and use psychic abilities.",
     "Exeggcute > Exeggutor"},

    {"Cubone","Ground","",
     "A Ground type Pokemon that wears the skull of its deceased mother. It carries a bone and uses it as both a weapon and a tool.",
     "Cubone > Marowak"},

    {"Marowak","Ground","",
     "A Ground type Pokemon that has become skilled at fighting with a bone. It is known for its strong defensive abilities and determination.",
     "Cubone > Marowak"},

    {"Hitmonlee","Fighting","",
     "A Fighting type Pokemon specialized in powerful kicks. Its legs can stretch a considerable distance and strike opponents from far away.",
     "Hitmonlee"},

    {"Hitmonchan","Fighting","",
     "A Fighting type Pokemon specializing in punches. Its rapid strikes are powerful enough to break through tough materials.",
     "Hitmonchan"},

    {"Lickitung","Normal","",
     "A Normal type Pokemon with an extremely long tongue. It uses its tongue to grab objects, explore its surroundings, and attack opponents.",
     "Lickitung"},

    {"Koffing","Poison","",
     "A Poison type Pokemon filled with toxic gas. It floats through the air and releases poisonous fumes when threatened.",
     "Koffing > Weezing"},

    {"Weezing","Poison","",
     "A Poison type Pokemon formed from two connected Koffing-like bodies. It produces toxic gases by mixing different poisonous fumes.",
     "Koffing > Weezing"},

    {"Rhyhorn","Ground","Rock",
     "A Ground and Rock type Pokemon with a thick, sturdy body. It charges directly at obstacles and relies on its physical strength.",
     "Rhyhorn > Rhydon"},

    {"Rhydon","Ground","Rock",
     "A powerful Ground and Rock type Pokemon covered in thick armor. Its horn can drill through solid materials and it can withstand heavy attacks.",
     "Rhyhorn > Rhydon"},

    {"Chansey","Normal","",
     "A kind Normal type Pokemon that carries a nutritious egg in its pouch. It is known for caring for injured Pokemon and people.",
     "Chansey"},

    {"Tangela","Grass","",
     "A Grass type Pokemon whose body is hidden beneath a thick mass of blue vines. The vines grow continuously and can be used to grab opponents.",
     "Tangela"},

    {"Kangaskhan","Normal","",
     "A large Normal type Pokemon that raises a baby in its pouch. It becomes extremely protective and will fight fiercely to defend its young.",
     "Kangaskhan"},

    {"Horsea","Water","",
     "A small Water type seahorse Pokemon that lives near coral reefs. It can shoot accurate streams of water and hide among underwater plants.",
     "Horsea > Seadra"},

    {"Seadra","Water","",
     "A Water type seahorse Pokemon covered with sharp poisonous spikes. It can swim backward and uses its spikes to discourage attackers.",
     "Horsea > Seadra"},

    {"Goldeen","Water","",
     "A Water type fish Pokemon with a sharp horn on its head. It swims gracefully through rivers and lakes and uses its horn in battle.",
     "Goldeen > Seaking"},

    {"Seaking","Water","",
     "A powerful Water type fish Pokemon with a large horn. It becomes aggressive during breeding season and uses its horn to defend its territory.",
     "Goldeen > Seaking"},

    {"Staryu","Water","",
     "A Water type star-shaped Pokemon with a glowing central core. Its core shines brightly at night and can regenerate if damaged.",
     "Staryu > Starmie"},

    {"Starmie","Water","Psychic",
     "A mysterious Water and Psychic type Pokemon with a jewel-like core. The core shines in many colors and its psychic abilities are powerful.",
     "Staryu > Starmie"},

    {"MrMime","Psychic","",
     "A Psychic type Pokemon skilled at creating invisible walls and barriers through mime-like movements. It uses these barriers for defense and trickery.",
     "MrMime"},

    {"Scyther","Bug","Flying",
     "A fast Bug and Flying type Pokemon with sharp scythe-like arms. It can move quickly through grass and cut through opponents with precise strikes.",
     "Scyther"},

    {"Jynx","Ice","Psychic",
     "An Ice and Psychic type Pokemon with powerful mental abilities. It moves rhythmically and communicates through distinctive sounds and gestures.",
     "Jynx"},

    {"Electabuzz","Electric","",
     "An Electric type Pokemon that generates electricity throughout its body. It becomes especially active during thunderstorms.",
     "Electabuzz"},

    {"Magmar","Fire","",
     "A Fire type Pokemon with a body adapted to extreme heat. It lives near volcanoes and can produce intense flames from its body.",
     "Magmar"},

    {"Pinsir","Bug","",
     "A powerful Bug type Pokemon with enormous pincers. It can grab opponents with its horns and lift objects much heavier than itself.",
     "Pinsir"},

    {"Tauros","Normal","",
     "A wild Normal type bull Pokemon with three tails. It becomes excited during battle and charges opponents repeatedly without giving up.",
     "Tauros"},

    {"Magikarp","Water","",
     "A Water type fish Pokemon famous for its weak swimming ability. Although it is not powerful, it can eventually evolve into the fearsome Gyarados.",
     "Magikarp > Gyarados"},

    {"Gyarados","Water","Flying",
     "A huge Water and Flying type Pokemon known for its violent temper. Its rage can cause massive destruction and it is extremely difficult to stop once enraged.",
     "Magikarp > Gyarados"},

    {"Lapras","Water","Ice",
     "A gentle Water and Ice type Pokemon that lives in cold seas. Its strong body allows people to ride across oceans on its back.",
     "Lapras"},

    {"Ditto","Normal","",
     "A Normal type Pokemon capable of transforming into almost any other Pokemon. Its transformation ability allows it to copy the appearance and abilities of its target.",
     "Ditto"},

    {"Eevee","Normal","",
     "A Normal type Pokemon with unstable genetic traits. Its genetics allow it to evolve into several different forms depending on environmental influences.",
     "Eevee > Vaporeon / Jolteon / Flareon"},

    {"Vaporeon","Water","",
     "A Water type Eevee evolution whose body has adapted to aquatic environments. Its fins and tail help it swim quickly through water.",
     "Eevee > Vaporeon"},

    {"Jolteon","Electric","",
     "An Electric type Eevee evolution with fur that can generate electricity. It can turn its fur into sharp electrical needles during battle.",
     "Eevee > Jolteon"},

    {"Flareon","Fire","",
     "A Fire type Eevee evolution that stores heat inside a special flame sac. It can breathe extremely hot air and produce powerful fire attacks.",
     "Eevee > Flareon"},

    {"Porygon","Normal","",
     "A Normal type Pokemon created entirely from computer programming. It can move through digital environments and was designed for virtual exploration.",
     "Porygon"},

    {"Omanyte","Rock","Water",
     "An ancient Rock and Water type Pokemon revived from a fossil. Its spiral shell protected it while it lived in prehistoric oceans.",
     "Omanyte > Omastar"},

    {"Omastar","Rock","Water",
     "An ancient Rock and Water type Pokemon with a powerful shell and tentacles. It used its tentacles to capture prey in prehistoric seas.",
     "Omanyte > Omastar"},

    {"Kabuto","Rock","Water",
     "An ancient Rock and Water type Pokemon revived from a fossil. Its hard shell protected it while it lived along prehistoric ocean floors.",
     "Kabuto > Kabutops"},

    {"Kabutops","Rock","Water",
     "An ancient Rock and Water type predator with sharp blades on its arms. It was highly adapted for hunting prey in prehistoric oceans.",
     "Kabuto > Kabutops"},

    {"Aerodactyl","Rock","Flying",
     "An ancient Rock and Flying type Pokemon revived from a fossil. It was a fierce prehistoric predator with powerful jaws and large wings.",
     "Aerodactyl"},

    {"Snorlax","Normal","",
     "A huge Normal type Pokemon that spends most of its time eating and sleeping. It can eat enormous quantities of food before returning to sleep.",
     "Snorlax"},

    {"Articuno","Ice","Flying",
     "A legendary Ice and Flying type bird Pokemon associated with icy winds. Its wings create a chill that can freeze moisture in the air.",
     "Articuno"},

    {"Zapdos","Electric","Flying",
     "A legendary Electric and Flying type bird Pokemon associated with thunderstorms. Its wings crackle with electricity as it flies through storm clouds.",
     "Zapdos"},

    {"Moltres","Fire","Flying",
     "A legendary Fire and Flying type bird surrounded by brilliant flames. Its appearance is associated with fire and intense heat.",
     "Moltres"},

    {"Dratini","Dragon","",
     "A rare Dragon type Pokemon that lives in water. It grows steadily over time and is known for its beautiful, serpent-like appearance.",
     "Dratini > Dragonair > Dragonite"},

    {"Dragonair","Dragon","",
     "A graceful Dragon type Pokemon with crystal-like orbs on its neck and tail. It is said to possess mysterious powers associated with the weather.",
     "Dratini > Dragonair > Dragonite"},

    {"Dragonite","Dragon","Flying",
     "A powerful Dragon and Flying type Pokemon with a gentle personality. Despite its size, it can fly quickly and is known to rescue people at sea.",
     "Dratini > Dragonair > Dragonite"},

    {"Mewtwo","Psychic","",
     "A legendary Psychic type Pokemon created through genetic experimentation. It possesses enormous psychic power and is highly intelligent and dangerous.",
     "Mewtwo"},

    {"Mew","Psychic","",
     "A mythical Psychic type Pokemon believed to contain the genetic traits of every Pokemon. It is extremely rare and can use many different moves.",
     "Mew"},
        {"Chikorita","Grass","",
     "A Grass type Pokemon with a large leaf on its head. The leaf gives off a pleasant aroma and helps it sense its surroundings.",
     "Chikorita > Bayleef > Meganium"},
    {"Bayleef","Grass","",
     "A Grass type Pokemon whose large leaves release a spicy aroma. The scent is said to invigorate those who smell it.",
     "Chikorita > Bayleef > Meganium"},
    {"Meganium","Grass","",
     "A Grass type Pokemon whose flower releases a soothing fragrance. Its petals have the power to revive weakened plants.",
     "Chikorita > Bayleef > Meganium"},

    {"Cyndaquil","Fire","",
     "A Fire type Pokemon with flames that erupt from its back when it is startled or excited.",
     "Cyndaquil > Quilava > Typhlosion"},
    {"Quilava","Fire","",
     "A Fire type Pokemon that uses the flames on its back and head to intimidate opponents and attack with speed.",
     "Cyndaquil > Quilava > Typhlosion"},
    {"Typhlosion","Fire","",
     "A powerful Fire type Pokemon that creates explosions of heat and flames when it becomes enraged.",
     "Cyndaquil > Quilava > Typhlosion"},

    {"Totodile","Water","",
     "A Water type Pokemon with powerful jaws. Although it is small, it can bite down with surprising strength.",
     "Totodile > Croconaw > Feraligatr"},
    {"Croconaw","Water","",
     "A Water type Pokemon with strong jaws and sharp teeth. Once its teeth bite into something, it rarely lets go.",
     "Totodile > Croconaw > Feraligatr"},
    {"Feraligatr","Water","",
     "A large Water type Pokemon with powerful jaws and muscular limbs. It intimidates enemies by opening its huge mouth.",
     "Totodile > Croconaw > Feraligatr"},

    {"Sentret","Normal","",
     "A Normal type Pokemon that stands on its tail to watch for danger. It takes turns keeping watch with its group.",
     "Sentret > Furret"},
    {"Furret","Normal","",
     "A Normal type Pokemon with a long, flexible body. It can move through narrow spaces by squeezing its body tightly.",
     "Sentret > Furret"},

    {"Hoothoot","Normal","Flying",
     "A Normal and Flying type Pokemon with a clock-like sense of time. It always keeps one foot on the ground.",
     "Hoothoot > Noctowl"},
    {"Noctowl","Normal","Flying",
     "A Normal and Flying type Pokemon with excellent night vision. Its large eyes allow it to see clearly in darkness.",
     "Hoothoot > Noctowl"},

    {"Ledyba","Bug","Flying",
     "A Bug and Flying type Pokemon that gathers with others when it becomes cold. It communicates using scents.",
     "Ledyba > Ledian"},
    {"Ledian","Bug","Flying",
     "A Bug and Flying type Pokemon that uses its star-shaped patterns and powerful punches to battle opponents.",
     "Ledyba > Ledian"},

    {"Spinarak","Bug","Poison",
     "A Bug and Poison type Pokemon that spins webs to catch prey. Its web patterns can resemble artistic designs.",
     "Spinarak > Ariados"},
    {"Ariados","Bug","Poison",
     "A Bug and Poison type Pokemon that uses its sticky web to trap prey. It can track prey by following strands of silk.",
     "Spinarak > Ariados"},

    {"Crobat","Poison","Flying",
     "A Poison and Flying type Pokemon with four wings that allow it to fly silently and quickly, even at night.",
     "Zubat > Golbat > Crobat"},

    {"Chinchou","Water","Electric",
     "A Water and Electric type Pokemon that uses the two glowing antennae on its head to communicate and attract prey.",
     "Chinchou > Lanturn"},
    {"Lanturn","Water","Electric",
     "A Water and Electric type Pokemon whose glowing antenna can illuminate the ocean depths and attract prey.",
     "Chinchou > Lanturn"},

    {"Pichu","Electric","",
     "An Electric type Pokemon that stores electricity in its cheeks. Its small body makes it easy to discharge electricity accidentally.",
     "Pichu > Pikachu > Raichu"},

    {"Cleffa","Fairy","",
     "A Fairy type Pokemon that is said to have arrived from outer space. It gathers with others under a starry sky.",
     "Cleffa > Clefairy > Clefable"},

    {"Igglybuff","Normal","Fairy",
     "A Normal and Fairy type Pokemon with a soft, balloon-like body. Its body becomes easier to bounce when inflated with air.",
     "Igglybuff > Jigglypuff > Wigglytuff"},

    {"Togepi","Fairy","",
     "A Fairy type Pokemon whose shell is filled with happiness. It shares its stored happiness with people and Pokemon.",
     "Togepi > Togetic > Togekiss"},
    {"Togetic","Fairy","Flying",
     "A Fairy and Flying type Pokemon that appears to people who have pure hearts. It spreads happiness wherever it goes.",
     "Togepi > Togetic > Togekiss"},

    {"Natu","Psychic","Flying",
     "A Psychic and Flying type Pokemon that hops through forests searching for berries and insects. It cannot fly well despite its wings.",
     "Natu > Xatu"},
    {"Xatu","Psychic","Flying",
     "A Psychic and Flying type Pokemon that is said to see both the past and the future. It remains still while observing its surroundings.",
     "Natu > Xatu"},

    {"Mareep","Electric","",
     "An Electric type Pokemon covered in soft wool that stores static electricity. Its wool grows continuously.",
     "Mareep > Flaaffy > Ampharos"},
    {"Flaaffy","Electric","",
     "An Electric type Pokemon whose wool stores electricity. As its wool decreases, its body becomes better at producing electricity.",
     "Mareep > Flaaffy > Ampharos"},
    {"Ampharos","Electric","",
     "An Electric type Pokemon whose bright tail can be seen from very far away. Its light has long been used as a beacon.",
     "Mareep > Flaaffy > Ampharos"},

    {"Bellossom","Grass","",
     "A Grass type Pokemon that dances when the sun is shining. Its colorful petals release a pleasant fragrance.",
     "Oddish > Gloom > Bellossom"},

    {"Marill","Water","Fairy",
     "A Water and Fairy type Pokemon with a buoyant tail that acts like a flotation device. It can swim easily in rivers.",
     "Azurill > Marill > Azumarill"},
    {"Azumarill","Water","Fairy",
     "A Water and Fairy type Pokemon with powerful hearing that allows it to detect movement underwater.",
     "Azurill > Marill > Azumarill"},

    {"Sudowoodo","Rock","",
     "A Rock type Pokemon that disguises itself as a tree. It avoids water and may flee when rain begins to fall.",
     "Bonsly > Sudowoodo"},

    {"Politoed","Water","",
     "A Water type Pokemon whose deep cry can make Poliwag and Poliwhirl gather around it. Its curled crown marks its status.",
     "Poliwag > Poliwhirl > Politoed"},

    {"Hoppip","Grass","Flying",
     "A Grass and Flying type Pokemon so light that strong winds can carry it away. It travels by floating through the air.",
     "Hoppip > Skiploom > Jumpluff"},
    {"Skiploom","Grass","Flying",
     "A Grass and Flying type Pokemon whose flower opens when exposed to sunlight. It floats through the air on warm winds.",
     "Hoppip > Skiploom > Jumpluff"},
    {"Jumpluff","Grass","Flying",
     "A Grass and Flying type Pokemon that drifts across the sky using its cotton-like spores. It can travel great distances with the wind.",
     "Hoppip > Skiploom > Jumpluff"},

    {"Aipom","Normal","",
     "A Normal type Pokemon with a hand-like tail. It uses its tail to swing between trees and grab objects.",
     "Aipom > Ambipom"},

    {"Sunkern","Grass","",
     "A Grass type Pokemon that stores nutrients in its body by absorbing sunlight. It is vulnerable to attacks from many predators.",
     "Sunkern > Sunflora"},
    {"Sunflora","Grass","",
     "A Grass type Pokemon that converts sunlight into energy. It moves actively during the day and becomes still after sunset.",
     "Sunkern > Sunflora"},

    {"Yanma","Bug","Flying",
     "A Bug and Flying type Pokemon with large eyes that allow it to see in every direction. It is an extremely agile flier.",
     "Yanma > Yanmega"},

    {"Wooper","Water","Ground",
     "A Water and Ground type Pokemon that lives in cold water. After coming onto land, it coats its body with a protective slime.",
     "Wooper > Quagsire"},
    {"Quagsire","Water","Ground",
     "A Water and Ground type Pokemon with a relaxed nature. It often waits motionlessly in rivers for food to come near.",
     "Wooper > Quagsire"},

    {"Espeon","Psychic","",
     "A Psychic type Pokemon that develops strong psychic abilities through its bond with its Trainer. Its forked tail senses danger.",
     "Eevee > Espeon"},

    {"Umbreon","Dark","",
     "A Dark type Pokemon that becomes active at night. Its rings glow when it is excited and help it intimidate opponents.",
     "Eevee > Umbreon"},

    {"Murkrow","Dark","Flying",
     "A Dark and Flying type Pokemon that is feared because it is often associated with bad luck. It enjoys stealing shiny objects.",
     "Murkrow > Honchkrow"},

    {"Slowking","Water","Psychic",
     "A Water and Psychic type Pokemon with extraordinary intelligence. The Shellder on its head enhances its mental abilities.",
     "Slowpoke > Slowbro / Slowking"},

    {"Misdreavus","Ghost","",
     "A Ghost type Pokemon that enjoys frightening people by screaming and pulling at their hair during the night.",
     "Misdreavus > Mismagius"},

    {"Unown","Psychic","",
     "A Psychic type Pokemon with many different shapes. Its mysterious powers and origins remain largely unknown.",
     "Unown"},

    {"Wobbuffet","Psychic","",
     "A Psychic type Pokemon that normally avoids attacking. It waits patiently for an opponent to strike before countering.",
     "Wynaut > Wobbuffet"},

    {"Girafarig","Normal","Psychic",
     "A Normal and Psychic type Pokemon with a tail that has its own small brain. The tail can react independently to danger.",
     "Girafarig > Farigiraf"},

    {"Pineco","Bug","",
     "A Bug type Pokemon that hangs from tree branches and disguises itself as a pine cone. It can explode when threatened.",
     "Pineco > Forretress"},
    {"Forretress","Bug","Steel",
     "A Bug and Steel type Pokemon covered by a hard shell. It launches pieces of its shell at targets to defend itself.",
     "Pineco > Forretress"},

    {"Dunsparce","Normal","",
     "A Normal type Pokemon that lives underground. It uses its drill-like tail to dig tunnels and escape from danger.",
     "Dunsparce > Dudunsparce"},

    {"Gligar","Ground","Flying",
     "A Ground and Flying type Pokemon that glides through the air using its wing-like membranes. It can cling to cliffs easily.",
     "Gligar > Gliscor"},

    {"Steelix","Steel","Ground",
     "A Steel and Ground type Pokemon that evolves by digging deep underground. Its body becomes harder the deeper it travels.",
     "Onix > Steelix"},

    {"Snubbull","Fairy","",
     "A Fairy type Pokemon with a frightening-looking face despite its friendly nature. Its appearance often scares away enemies.",
     "Snubbull > Granbull"},
    {"Granbull","Fairy","",
     "A Fairy type Pokemon with powerful jaws and large fangs. Despite its intimidating appearance, it is generally timid.",
     "Snubbull > Granbull"},

    {"Qwilfish","Water","Poison",
     "A Water and Poison type Pokemon that inflates its body by swallowing water. It can launch poisonous spikes at attackers.",
     "Qwilfish"},

    {"Scizor","Bug","Steel",
     "A Bug and Steel type Pokemon with metal pincers shaped like a pair of eyes. Its red body helps it blend into surroundings.",
     "Scyther > Scizor"},

    {"Shuckle","Bug","Rock",
     "A Bug and Rock type Pokemon that hides beneath its shell. It stores berries inside its body and converts them into juice.",
     "Shuckle"},

    {"Heracross","Bug","Fighting",
     "A Bug and Fighting type Pokemon with tremendous strength. It uses its horn to throw opponents into the air.",
     "Heracross"},

    {"Sneasel","Dark","Ice",
     "A Dark and Ice type Pokemon with sharp claws. It climbs trees and steals eggs from nests when given the opportunity.",
     "Sneasel > Weavile"},

    {"Teddiursa","Normal","",
     "A Normal type Pokemon that often licks its paws after finding honey. The crescent mark on its forehead glows when it is happy.",
     "Teddiursa > Ursaring > Ursaluna"},
    {"Ursaring","Normal","",
     "A Normal type Pokemon with powerful claws and strength. It can become dangerous when defending its territory.",
     "Teddiursa > Ursaring > Ursaluna"},

    {"Slugma","Fire","",
     "A Fire type Pokemon made almost entirely of molten magma. Its body cools and hardens if it stops moving.",
     "Slugma > Magcargo"},
    {"Magcargo","Fire","Rock",
     "A Fire and Rock type Pokemon with a body made of molten lava protected by a brittle shell.",
     "Slugma > Magcargo"},

    {"Swinub","Ice","Ground",
     "An Ice and Ground type Pokemon covered in thick fur. It searches for food by digging through snow and frozen soil.",
     "Swinub > Piloswine > Mamoswine"},
    {"Piloswine","Ice","Ground",
     "An Ice and Ground type Pokemon covered in long, shaggy fur. It uses its tusks to charge through snow and ice.",
     "Swinub > Piloswine > Mamoswine"},

    {"Corsola","Water","Rock",
     "A Water and Rock type Pokemon that grows branches resembling coral. Its branches break easily but grow back quickly.",
     "Corsola"},

    {"Remoraid","Water","",
     "A Water type Pokemon known for its remarkable accuracy. It can shoot water from its mouth with surprising precision.",
     "Remoraid > Octillery"},
    {"Octillery","Water","",
     "A Water type Pokemon that resembles an octopus. It grabs opponents with its tentacles and attacks using powerful water blasts.",
     "Remoraid > Octillery"},

    {"Delibird","Ice","Flying",
     "An Ice and Flying type Pokemon that carries food in its tail. It shares its food with those in need.",
     "Delibird"},

    {"Mantine","Water","Flying",
     "A Water and Flying type Pokemon that glides gracefully through the ocean. Remoraid often swim alongside it.",
     "Mantyke > Mantine"},

    {"Skarmory","Steel","Flying",
     "A Steel and Flying type Pokemon covered in hard, razor-sharp feathers. It can fly at high speeds despite its metallic body.",
     "Skarmory"},

    {"Houndour","Dark","Fire",
     "A Dark and Fire type Pokemon that hunts in packs. Its eerie howls are used to communicate with other members of its group.",
     "Houndour > Houndoom"},
    {"Houndoom","Dark","Fire",
     "A Dark and Fire type Pokemon whose fiery breath contains toxins. Its howl can frighten even experienced Pokemon trainers.",
     "Houndour > Houndoom"},

    {"Kingdra","Water","Dragon",
     "A Water and Dragon type Pokemon that lives in deep ocean trenches. Its powerful whirlpools can disturb the surrounding waters.",
     "Horsea > Seadra > Kingdra"},

    {"Phanpy","Ground","",
     "A Ground type Pokemon that uses its trunk to wash itself. It can carry surprisingly heavy objects despite its small size.",
     "Phanpy > Donphan"},
    {"Donphan","Ground","",
     "A Ground type Pokemon with a tough armored body. It curls into a wheel and rolls at high speed to attack enemies.",
     "Phanpy > Donphan"},

    {"Porygon2","Normal","",
     "A Normal type Pokemon created using advanced technology. Its artificial intelligence allows it to learn and adapt to new situations.",
     "Porygon > Porygon2 > Porygon-Z"},

    {"Stantler","Normal","",
     "A Normal type Pokemon whose antlers distort space and create illusions. Its antlers were once highly valued by people.",
     "Stantler > Wyrdeer"},

    {"Smeargle","Normal","",
     "A Normal type Pokemon that paints using the tip of its tail. It marks its territory with colorful patterns.",
     "Smeargle"},

    {"Tyrogue","Fighting","",
     "A Fighting type Pokemon that constantly trains to become stronger. It eagerly challenges opponents regardless of their size.",
     "Tyrogue > Hitmonlee / Hitmonchan / Hitmontop"},

    {"Hitmontop","Fighting","",
     "A Fighting type Pokemon that spins rapidly on its head while attacking with its legs. Its movements resemble a spinning top.",
     "Tyrogue > Hitmontop"},

    {"Smoochum","Ice","Psychic",
     "An Ice and Psychic type Pokemon that constantly practices walking and often falls down. It enjoys checking its appearance.",
     "Smoochum > Jynx"},

    {"Elekid","Electric","",
     "An Electric type Pokemon that generates electricity by rotating its arms. It may accidentally cause power outages when excited.",
     "Elekid > Electabuzz > Electivire"},

    {"Magby","Fire","",
     "A Fire type Pokemon born near volcanic areas. Its body temperature is extremely high and smoke often escapes from its nostrils.",
     "Magby > Magmar > Magmortar"},

    {"Miltank","Normal","",
     "A Normal type Pokemon that produces nutritious milk every day. Its milk is enjoyed by both people and Pokemon.",
     "Miltank"},

    {"Blissey","Normal","",
     "A Normal type Pokemon that cares deeply for injured Pokemon. Its eggs are highly nutritious and bring happiness to those who eat them.",
     "Happiny > Chansey > Blissey"},

    {"Raikou","Electric","",
     "An Electric type Legendary Pokemon that races across the land like a thunderstorm. Its roar resembles the sound of thunder.",
     "Raikou"},

    {"Entei","Fire","",
     "A Fire type Legendary Pokemon that is said to represent the eruption of a volcano. It can produce immense bursts of heat.",
     "Entei"},

    {"Suicune","Water","",
     "A Water type Legendary Pokemon associated with pure water. It can purify polluted water as it travels across the land.",
     "Suicune"},

    {"Larvitar","Rock","Ground",
     "A Rock and Ground type Pokemon born deep underground. It feeds on soil before emerging from beneath the earth.",
     "Larvitar > Pupitar > Tyranitar"},
    {"Pupitar","Rock","Ground",
     "A Rock and Ground type Pokemon enclosed in a hard shell. It stores energy inside its body while preparing to evolve.",
     "Larvitar > Pupitar > Tyranitar"},
    {"Tyranitar","Rock","Dark",
     "A powerful Rock and Dark type Pokemon with immense strength. Its presence can reshape the surrounding landscape.",
     "Larvitar > Pupitar > Tyranitar"},

    {"Lugia","Psychic","Flying",
     "A Psychic and Flying type Legendary Pokemon said to live deep beneath the ocean. Its wings can create storms powerful enough to change the weather.",
     "Lugia"},

    {"Ho-Oh","Fire","Flying",
     "A Fire and Flying type Legendary Pokemon said to bring happiness to those who see it. Its colorful feathers shine brilliantly.",
     "Ho-Oh"},

        {"Celebi","Psychic","Grass",
     "A Psychic and Grass type Mythical Pokemon that travels through time. It appears wherever forests are healthy and peaceful.",
     "Celebi"},

    {"Treecko","Grass","",
     "A Grass type Pokemon that grows by climbing trees. Its tail is strong enough to break thick branches.",
     "Treecko > Grovyle > Sceptile"},

    {"Grovyle","Grass","",
     "A Grass type Pokemon with leafy blades growing from its body. It moves quickly through dense forests.",
     "Treecko > Grovyle > Sceptile"},

    {"Sceptile","Grass","",
     "A Grass type Pokemon with leaves growing from its arms and seeds containing nutrients on its back.",
     "Treecko > Grovyle > Sceptile"},

    {"Torchic","Fire","",
     "A Fire type Pokemon that has a flame burning inside its body. It is warm to hold and produces fireballs.",
     "Torchic > Combusken > Blaziken"},

    {"Combusken","Fire","Fighting",
     "A Fire and Fighting type Pokemon that trains its legs and can deliver powerful kicks.",
     "Torchic > Combusken > Blaziken"},

    {"Blaziken","Fire","Fighting",
     "A Fire and Fighting type Pokemon with powerful legs. It can leap high and unleash fiery kicks.",
     "Torchic > Combusken > Blaziken"},

    {"Mudkip","Water","",
     "A Water type Pokemon with a fin on its head that senses movements in water and air.",
     "Mudkip > Marshtomp > Swampert"},

    {"Marshtomp","Water","Ground",
     "A Water and Ground type Pokemon that can move easily through mud and muddy water.",
     "Mudkip > Marshtomp > Swampert"},

    {"Swampert","Water","Ground",
     "A Water and Ground type Pokemon with incredible strength. It can easily drag large rocks and swim through rough seas.",
     "Mudkip > Marshtomp > Swampert"},

    {"Poochyena","Dark","",
     "A Dark type Pokemon with a strong sense of smell. It relentlessly chases prey once it begins pursuing it.",
     "Poochyena > Mightyena"},

    {"Mightyena","Dark","",
     "A Dark type Pokemon that follows the orders of its leader and can intimidate opponents with its fierce appearance.",
     "Poochyena > Mightyena"},

    {"Zigzagoon","Normal","",
     "A Normal type Pokemon that constantly wanders around while searching for food. Its fur has a distinctive zigzag pattern.",
     "Zigzagoon > Linoone"},

    {"Linoone","Normal","",
     "A Normal type Pokemon that can run extremely fast in straight lines but has difficulty making sharp turns.",
     "Zigzagoon > Linoone"},

    {"Wurmple","Bug","",
     "A Bug type Pokemon that uses the spikes on its body to defend itself from predators.",
     "Wurmple > Silcoon > Beautifly"},

    {"Silcoon","Bug","",
     "A Bug type Pokemon that protects itself inside a silk cocoon while preparing to evolve.",
     "Wurmple > Silcoon > Beautifly"},

    {"Beautifly","Bug","Flying",
     "A Bug and Flying type Pokemon with colorful wings. It uses its long mouth to feed on flower nectar.",
     "Wurmple > Silcoon > Beautifly"},

    {"Cascoon","Bug","",
     "A Bug type Pokemon that stays inside a hard cocoon while its body develops before evolution.",
     "Wurmple > Cascoon > Dustox"},

    {"Dustox","Bug","Poison",
     "A Bug and Poison type Pokemon that is attracted to bright lights and scatters poisonous dust from its wings.",
     "Wurmple > Cascoon > Dustox"},

};

#endif
