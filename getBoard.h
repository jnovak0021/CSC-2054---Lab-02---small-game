#pragma once
#include <vector>
#include <string>	

using namespace std;

//protoype getBoard
//takes in int, a vector, and a reference boolean
//returns string
string getBoard(int pos, vector <int> vect, bool& collide);