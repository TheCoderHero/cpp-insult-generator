#include "Insult.h"

int main() {

	// Initialize Insults
	vector <string> adjA = { "lazy", "stupid", "insecure", "idotic", "slimy", "slutty", "smelly", "pompous", "communist", 
				"pie-eating", "elitist", "white-trash", "drug-loving", "butterface", "tone-deaf", "ugly", "creepy", 
				"lilly-livered", "rotten", "stinky", "lame", "dim-witted", "funky", "crusty", "steamy", "drizzly", 
				"grizzly", "squirty", "uptight", "hairy", "husky", "arrogant", "nippy", "chunky", "drooling", "artless", 
				"bawdy", "beslubbering", "bootless", "churlish", "cockered", "clouted", "craven", "currish", "dankish", 
				"dissembling", "droning", "errant", "fawning", "fobbing", "froward", "frothy", "gleeking", "goatish", 
				"gorbellied", "impertinent", "infectious", "jarring", "loggerheaded", "lumpish", "crusty", "decrepit", 
				"stupid", "moronic", "greasy", "poxy", "ugly", "putrid", "assinine", "sickening", "mammering", 
				"mangled", "mewling", "paunchy", "pribbling", "puking", "puny", "qualling", "rank", "reeky", "rougish", 
				"ruttish", "saucy", "spleeny", "spongy", "surly", "tottering", "unmuzzled", "vain", "venomed", 
				"villainous", "warped", "wayward", "weedy", "yeasty" };

	vector <string> adjB = { "hiney", "poop", "toot", "wedgie", "stool", "fudge", "bum", "potty", "dookie", "pudding", "sphincter", 
				"booger", "feces", "snot", "crusty", "crud", "sludge", "tool", "base-court", "bat-fowling", 
				"beef-witted", "bettle-headed", "boil-brained", "clapper-clawed", "clay-brained", "common-kissing", 
				"crook-pated", "dismal-dreaming", "dizzy-eyed", "dog-hearted", "dread-bolted", "earth-vexing", 
				"elf-skinned", "fat-kidneyed", "fen-sucked", "flap-mouthed", "fly-bitten", "folly-fallen", "fool-born", 
				"full-gorged", "guts-griping", "half-faced", "hasty-witted" "crotch-sniffing", "donkey-spanking", 
				"worm-ridden", "grubby", "fart-eating", "hedge-born", "hell-hated", "idle-headed", "ill-breeding", 
				"ill-nurtured", "knotty-pated", "milk-livered", "motley-minded", "onion-eyed", "plume-plucked", 
				"pottle-deep", "pox-marked", "reeling-ripe", "rough-hewn", "rude-growling", "rump-fed", "shard-borne", 
				"sheep-biting", "spur-galled", "swag-bellied", "tadry-gaited", "tickle-brained", "toad-spotted", 
				"unchin-snouted", "weather-bitten" };

	vector <string> mainNoun = { "pilot", "canoe", "captain", "pirate", "hammer", "box", "jockey", "waffle", "goblin", "blossum", 
				    "biscuit", "clown", "socket", "monster", "hound", "dragon", "balloon", "sqeegee", "turtle", 
				    "cabbage", "bomb", "sniffer", "binkie", "stump", "nugget", "whistle", "twig", "knuckle", "burger", 
				    "hot dog", "loaf", "freckle", "soldier", "kernel", "shingle", "warrior", "apple-john", "baggage", 
				    "barnacle", "bladder", "boar-pig", "bugbear", "bum-bailey", "canker-blossom", "clack-dish", 
				    "clot-pole", "coxcomb", "codpiece", "death-token", "dewberry", "flap-dragon", "flax-wench", 
				    "flirt-gill", "foot-licker", "fustilarian", "giglet", "gudgeon", "haggard", "harpy", "hedge-pig", 
				    "horn-beast", "hemorrhoid", "scumbucket", "toerag", "hackwack", "imbecile", "maggot", "hipster", 
				    "garbage", "jerkstore", "horn-beast", "hugger-mugger", "joithead", "lewdster", "lout", "maggot-pie", 
				    "measle", "minnow", "miscreant", "moldwarp", "mumble-news", "nut-hook", "pigeon-egg", "pignut", 
				    "puttock", "pumpion", "ratsbane", "scut", "strumpet", "varlot", "vassal", "whey-face", "wagtail" };

	// Create Insult Objects
	Insult insultA;
	Insult insultB;
	Insult noun;

	// Set the Insult Objects
	insultA.addInsult(adjA);
	insultB.addInsult(adjB);
	noun.addInsult(mainNoun);

	// Display the Insult
	cout << "You can take that " 
		  << insultA.getRandomInsult() << " " 
		  << insultB.getRandomInsult() << " "
		  << noun.getRandomInsult()
		  << " and shove it up your " 
		  << insultA.getRandomInsult() << " " 
		  << insultB.getRandomInsult() << " "
		  << noun.getRandomInsult() << "!" << endl;

	system("PAUSE");
	return 0;

}
