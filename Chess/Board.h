#ifndef BOARD_H
#define BOARD_H

#include "Pieces.h"


class board
{
public:
	board();
	~board();
	void setPiecesonBoard();
	Pieces getBoard(int x, int y) { return Board[x][y]; };

private:
	Pieces Board[8][8];

};

#endif