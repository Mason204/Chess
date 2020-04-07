#include "Pieces.h"
#include "Board.h"

Pieces::Pieces()
{

}

Pieces::~Pieces()
{

}

void Pieces::setPieceandType(Piece x, Type y)
{
	piece = x;
	type = y;
}

void Pieces::setX(int x_)
{
	x = x_;
}

void Pieces::setY(int y_)
{
	y = y_;
}

int Pieces::getX()
{
	return x;
}

int Pieces::getY()
{
	return y;
}

Piece Pieces::getPiece()
{
	return piece;
}

Type Pieces::getColor()
{
	return type;
}
