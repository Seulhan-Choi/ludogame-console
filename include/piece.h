#pragma once

#include <iostream>
#include <vector>
#include "player.h"

using namespace std;

class piece {
private:
	int position;
	int globalPosition;
	int availableMovements;
	bool active;
	int posession;
	vector<int> safeZones = { 5, 12, 17, 22, 29, 34, 39, 46, 51, 56, 63, 68 };


public:
	void defaultMovement(int n); // Default piece behavior. Moves relative to the result of the dices.
	void capturingMovement(); // Moves 20 extra.
	void setPosession(int n); // Set piece posession.

	int getglobalPosition();
	int getPosition();

	bool checkSafeZone();
	bool checkCapture();

};
