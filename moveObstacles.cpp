#include "moveObstacles.h"
#include <iostream>

//moveObstacles function that takes in reference vector and decrement each value of vector by 1
void moveObstacles(vector <int>& vect)
{
	//loop through vector and decrement by one
	for (int i = 0; i < vect.size(); i++)
	{
		vect[i] = vect[i]--;	//decrement each value of vect by 1
	}
}
