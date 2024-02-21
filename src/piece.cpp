#include <iostream>
#include <vector>
#include <random>

#include "piece.h"

using namespace std;

void piece::setPosession(int n) {
	if (n == 0) {
		posession = 0;
		position = 5;
		globalPosition = 5;
	}
	else if (n == 1)
	{
		posession = 1;
		position = 5;
		globalPosition = 22;
	}
	else if (n == 2)
	{
		posession = 2;
		position = 5;
		globalPosition = 39;
	}
	else if (n == 3)
	{
		posession = 3;
		position = 5;
		globalPosition = 56;
	}
}

void piece::defaultMovement(int n) {
	if (position + n < 76) {
		position += n;
		if (globalPosition + n > 68) {
			globalPosition = globalPosition + n - 68;
		}
	}
	else if (position + n == 76)
	{
		//piecewincounter
	}
	else if (position + n > 76)
	{
		position -= (n - (76 - position));
	}

}

void piece::capturingMovement() {
	piece::defaultMovement(20);
}

int piece::getglobalPosition() {
	return globalPosition;
}

int piece::getPosition() {
	return position;
}

bool piece::checkSafeZone() {
	for (int i = 0; i < safeZones.size(); i++) {
		if (globalPosition == safeZones[i])	return true;
	}		
	return false;
}

bool piece::checkCapture(int n, int a) {
	for (int i = 0; i < n; i++) {
		if (i != a && players[a].getglobalPosition() == players[i].getglobalPosition()) {
			return true;
		}
	}
	return false;
}