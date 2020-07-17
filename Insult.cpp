#include "Insult.h"

// CONSTRUCTOR 
Insult::Insult(){ 
	srand(time(0));
}

Insult::~Insult() { }

// FUNCTIONS
void Insult::addInsult(vector <string> words) 
{
	for (int x = 0; x < words.size(); x++) {
		insult.push_back(words[x]);
	}
}

void Insult::addInsultNumber(int randoNum) {
	insultNumber.push_back(randoNum);
}

string Insult::getRandomInsult() 
{
	randomNumber = randomNumberGenerator();
	for (int x = 0; x < insultNumber.size(); x++) {
		while (randomNumber == insultNumber[x]) {
			randomNumber = randomNumberGenerator();
		}
	}
	addInsultNumber(randomNumber);
	return insult[randomNumber];
}

int Insult::randomNumberGenerator() {
	return (rand() % insult.size());
}
