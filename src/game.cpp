#include <iostream>
#include <vector>

#include "game.h"
using namespace std;

void game::setEndGame(bool boo) {
	endGame = boo;
}

bool game::getEndGame() {
	 return endGame;
}
