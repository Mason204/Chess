#include "Board.h"

board::board()
{

}

board::~board()
{

}

void board::setPiecesonBoard()
{
	Board[0][0].setPieceandType(Rook, White);
	Board[1][0].setPieceandType(Knight, White);
	Board[2][0].setPieceandType(Bishop, White);
	Board[3][0].setPieceandType(Queen, White);
	Board[4][0].setPieceandType(King, White);
	Board[5][0].setPieceandType(Bishop, White);
	Board[6][0].setPieceandType(Knight, White);
	Board[7][0].setPieceandType(Rook, White);

	Board[0][7].setPieceandType(Rook, Black);
	Board[1][7].setPieceandType(Knight, Black);
	Board[2][7].setPieceandType(Bishop, Black);
	Board[3][7].setPieceandType(Queen, Black);
	Board[4][7].setPieceandType(King, Black);
	Board[5][7].setPieceandType(Bishop, Black);
	Board[6][7].setPieceandType(Knight, Black);
	Board[7][7].setPieceandType(Rook, Black);
	
	for (int i = 0; i < 8; i++)
	{
		Board[i][1].setPieceandType(Pawn, White);
		Board[i][6].setPieceandType(Pawn, Black);
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 2; j < 6; j++)
		{
			Board[i][j].setPieceandType(Empty, None);
		}
	}

}

