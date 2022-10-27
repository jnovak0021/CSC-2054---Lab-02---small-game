#include <iostream>
#include "getBoard.h"
#include "movePlayer.h"
#include "moveObstacles.h"
#include <vector>


using namespace std;

//create vector to hold the obstacles
vector <int> obstacleV;

//boolean value to keep track if player collides with object
bool collides = false;


//main function
int main()
{
	//set size of vector to 1 since only one obstacle exists at the starts
	obstacleV.resize(1);
	obstacleV[0] = 30;	//start first object at the 29 position

	//int to store players position
	int position = 1;

	//int to keep track of how many times the program has been looped
	int count = 1;

	//char to store user input for player movement
	char movement;

	//print out the board before any operations have been performed
	cout << getBoard(position,obstacleV, collides) << endl;


	//repeatedly print board while player has not won
	do
	{

		//see if a new obstacle needs to be added
		if (count % 3 == 0 && count != 0)
		{
			obstacleV.resize((count / 3) + 1);	//resize vector to add another value
			obstacleV[count / 3] = 31;	//add new int at count/3 to add new obstacle
	
		}
		//indicate where user should enter movement data
		cout << "--> ";

		//store user input to movement
		cin >> movement;

		//enter user input into movePlayer function to change user position and print out board with new position
		movePlayer(movement, position);

		//moveObstacles
		moveObstacles(obstacleV);

		cout << getBoard(position, obstacleV, collides);
		
		count++;


	} while (position < 31 && !collides);	//while user has not won (reached end of string) and has not collided, keep looping
	
	//if user collided with obstacle, inform them, otherwise, tell them they won
	if (collides)
		cout << "You collided with an obstacle!Try again next time!";
	else
		cout << "You Win!";
	cout << endl;
}


