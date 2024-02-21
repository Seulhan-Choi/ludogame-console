#include <iostream>
#include <vector>
#include <string>

#include "player.h"

using namespace std;

void player::setName(string playerName) {
	Name = playerName;
}
string player::getName() {
	return Name;
}
int player::getreservePieces() {
	return reservePieces;
}
