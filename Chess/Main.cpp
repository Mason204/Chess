/*
Mason Henry
Data Structure
Due: End of Semester
Create a game of Chess
*/

#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
	int x;
	int y;

	game G;
	G.setup();

	cin >> x;
	cin >> y;
	G.Pawn(x, y);

	return 0;
}