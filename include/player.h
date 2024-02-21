#pragma once

#include <iostream>
#include <string>

using namespace std;

class player {
private:
	string Name;
	int reservePieces = 4;
public:
	void setName(string playerName);
	string getName();
	int getreservePieces();
};