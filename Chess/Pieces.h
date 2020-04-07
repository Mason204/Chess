#ifndef PIECES_H
#define PIECES_H

enum Piece { King, Queen, Bishop, Knight, Rook, Pawn, Empty };
enum Type { Black, White, None, Option };

class Pieces
{
public:
	Pieces();
	~Pieces();
	void setPieceandType(Piece x, Type y);
	void setX(int x_);
	void setY(int y_);
	int getX();
	int getY();
	Piece getPiece();
	Type getColor();

private:	
	Piece piece;
	Type type;
	int x;
	int y;

};

#endif
