#include "Game.h"
#include "Board.h"
#include "Pieces.h"

using namespace std;

game::game()
{
	
}

game::~game()
{

}

void game::setup()
{
	Game.setPiecesonBoard();
}

void game::PawnOptions(int x, int y)
{
	if (Game.getBoard(x, y).getColor() == Type::White)
	{
		if (Game.getBoard(x, (y+1)).getPiece() == Piece::Empty)
		{
			//Shows option to move forward one space.
			//If chosen calls move function
		}
		if (y == 2 && Game.getBoard(x, (y+2)).getPiece() == Piece::Empty)
		{
			//Shows option to move forward two spaces.
			//If chosen calls move function
		}

		if (Game.getBoard((x + 1), (y + 1)).getColor() == Type::Black)
		{
			//Gives option to attack to right adjacent
			//If chosen calls attack function
		}
		if (Game.getBoard((x - 1), (y + 1)).getColor() == Type::Black)
		{
			//Shows option to attack to left adjacent
			//If chosen calls move function
		}
	}
}
