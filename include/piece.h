#pragma once

#include <iostream>

#pragma once

class piece {
private:
	int position;
	bool captured;

public:
	void defaultMovement();
	void capturingMovement();

};
