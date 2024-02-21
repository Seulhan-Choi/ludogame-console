#pragma once

#include <iostream>
#include <random>

#pragma once

class dice {
private:
	int currentRoll;
public:
	void diceRoll(); // Returns random value between 1 and 6
	int getRoll();
};

