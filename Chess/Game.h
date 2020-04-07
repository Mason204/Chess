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
	void Pawn(int x, int y);
	void PawnOptions(int x, int y, int C, Type color, int start);

private:
	board* Game;
	pawn pawnpiece;
};

#endif 
