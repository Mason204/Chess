#ifndef BOARD_H
#define BOARD_H

#include "Pieces.h"
#include "Pawn.h"


class board
{
public:
	board();
	~board();
	void setPiecesonBoard();
	Pieces* getBoard(int x, int y) { return &Board[x][y]; };
	void printBoard();
	void SetTextColor(int x);

private:
	Pieces Board[8][8];

};

#endif