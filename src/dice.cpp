#include <iostream>
#include <vector>
#include <random>

#include "dice.h"

using namespace std;

void dice::diceRoll()	{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distr(1, 6);
	currentRoll = distr(gen);
}

int dice::getRoll() {
	return currentRoll;
}