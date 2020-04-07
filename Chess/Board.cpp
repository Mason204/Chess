#include "Board.h"
#include <iostream>
#include <windows.h>

using namespace std;

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

void board::printBoard()
{
	SetTextColor(14);
	cout << "     1  2  3  4  5  6  7  8 \n";
	for (int i = 7; i >= 0; i--)
	{
		cout << " " << (i+1) << "  ";
		for (int j = 0; j < 8; j++)
		{
			Piece p = Board[j][i].getPiece();
			Type c = Board[j][i].getColor();
			
			switch (p)
			{
			case King: if (c == White)
				SetTextColor(1);
					 else
				SetTextColor(4);
				cout << " K ";
				break;
			case Queen: if (c == White)
				SetTextColor(1);
					  else
				SetTextColor(4);
				cout << " Q ";
				break;
			case Bishop: if (c == White)
				SetTextColor(1);
					   else
				SetTextColor(4);
				cout << " B ";
				break;
			case Knight: if (c == White)
				SetTextColor(1);
					   else
				SetTextColor(4);
				cout << " N ";
				break;
			case Rook: if (c == White)
				SetTextColor(1);
					 else
				SetTextColor(4);
				cout << " R ";
				break;
			case Pawn: if (c == White)
				SetTextColor(1);
					 else
				SetTextColor(4);
				cout << " P ";
				break;
			case Empty: if (c == None)
			{
				SetTextColor(7);
				cout << " X ";
			}
					  else
			{
				SetTextColor(5);
				cout << " O ";
			}
				break;

			default: cout << "   ";
			}
			
		}
		cout << endl;
		SetTextColor(14);
	}
	SetTextColor(2);
}

void board::SetTextColor(int x)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, x);
	//0=black
	//1=dark blue
	//2=green
	//3=light blue
	//4=red
	//5=purple
	//6=Yellow(Dark)
	//7=Default white
	//8= Gray
	//9=Bright blue
	//10=Bright green
	//11=Bright cyan
	//12=Bright red
	//13=Pink / Magenta
	//14=Yellow
	//15=Bright white
}

