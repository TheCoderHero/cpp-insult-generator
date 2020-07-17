#ifndef INSULT_H
#define INSULT_H

#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

class Insult
{
private:
	vector <string> insult;
	vector <int> insultNumber;
	int randomNumber;

public:
	// CONSTRUCTOR
	Insult();
	~Insult();

	// FUNCTIONS
	string getRandomInsult();
	int randomNumberGenerator();
	void addInsult(vector <string> words);
	void addInsultNumber(int randoNum);

};

#endif // INSULT_H
