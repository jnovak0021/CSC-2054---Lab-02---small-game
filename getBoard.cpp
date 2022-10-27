#include "getBoard.h"

//function to return the board to the user with the updated player position
string getBoard(int pos, vector <int> vect, bool &collide)
{
	//String to store the board
	string gameBoard = "B                              E";

	//loop through vector, insert 0 at place of objects and check if player collides
	for (int i = 0; i < vect.size(); i++)
	{
		//if player collides with object, set collide to true
		if (pos == vect[i])
		{
			collide = true;
		}
		gameBoard[vect[i]] = '0';
	}
	//insert player into the game
	gameBoard.at(pos) = 'P';

	return gameBoard + "\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n";
}
