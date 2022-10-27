#include "movePlayer.h"

//function to move player in a certain direction based off user input 
int movePlayer(char move, int& position)
{
	//if user enters a -- subtract one from position
	if (move == 'a')
		position--;
	// if user enters d -- add one to position
	else if (move == 'd')
		position++;
	// if user enters f -- add two to position
	else if (move == 'f')
		position += 2;
	//if user enters invalid input
	else
	{
		cout << "invalid input, please enter 'a', 'd', or 'f'\n";
		return position;	//keep position the same and return
	}
	
	//make sure player is still in bounds -- if out of bounds, return to previous position
	if (position >= 32)
	{
		position -=2;
	}
	else if (position < 1)
	{
		position++;
	}
	
	return position;
}