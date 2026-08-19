#ifndef POKEMON_H
#define POKEMON_H

#define POKEMON_COUNT 151

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
     "Mew"}
};

#endif
