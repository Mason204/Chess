#ifndef GAME_H
#define GAME_H

#include "Board.h"
#include "Pieces.h"

class game
{
public:
	game();
	~game();
	void setup();
	void PawnOptions(int x, int y);

private:
	board Game;
};

#endif 
