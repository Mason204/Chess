#include "Game.h"
#include "Board.h"
#include "Pieces.h"
#include <stdlib.h>
#include <iostream>
#include "Pawn.h"


using namespace std;

game::game()
{
	Game = new board;
}

game::~game()
{

}

void game::setup()
{
	Game->setPiecesonBoard();
	Game->printBoard();
}

void game::Pawn(int x, int y)
{
	x -= 1;
	y -= 1;
	int C = 0;
	Type color = None;
	int start = 0;
	if (Game->getBoard(x, y)->getColor() == Type::White)
	{
		C = 1;
		color = Black;
		start = 1;
	}
	else if (Game->getBoard(x, y)->getColor() == Type::Black)
	{
		C = -1;
		color = White;
		start = 6;
	}
	PawnOptions(x, y, C, color, start);
	system("CLS");
	Game->printBoard();
}

void game::PawnOptions(int x, int y, int C, Type color, int start)
{
	bool one = false;
	bool two = false;
	bool left = false;
	bool right = false;
	if (Game->getBoard(x, (y + C))->getPiece() == Piece::Empty)
	{
		Game->getBoard(x, (y + C))->setPieceandType(Piece::Empty, Type::Option);
		one = true;
		//If chosen calls move function
	}
	if (y == start && Game->getBoard(x, (y + (2*C)))->getPiece() == Piece::Empty)
	{
		Game->getBoard(x, (y + (2*C)))->setPieceandType(Piece::Empty, Type::Option);
		two = true;
		//If chosen calls move function
	}

	if (Game->getBoard((x + C), (y + C))->getColor() == color)
	{
		right = true;
		//Gives option to attack to right adjacent
		//If chosen calls attack function
	}
	if (Game->getBoard((x - C), (y + C))->getColor() == color)
	{
		left = true;
		//Shows option to attack to left adjacent
		//If chosen calls move function
	}
	system("CLS");
	Game->printBoard();
	cout << "Where would you like to move?\n";
	int newx;
	int newy;
	cin >> newx >> newy;
	if ((y + C) == newy && one)
	{
		//pawnpiece.Move1();
	}
}
