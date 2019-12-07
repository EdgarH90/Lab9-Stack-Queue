/*******************************************************************************************
** Author: Edgar Hernandez
** Creation Date: 11/30/2019
** Description: This program implements a stack and a queue using STL containers.
** The queue simulates a buffer and the stack creates a palindrome based on user input.
********************************************************************************************/
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <climits>
#include <time.h>
#include "inputValidation.hpp"
#include "palindrome.hpp"
#include "queueBuffer.hpp"
#include "menu.hpp"


int main()
{
	//Uses the current time to generate a random seed for each roll
	//Downcast as unsigned int to convert to 32-bit integer
	srand((unsigned int)time(NULL));

	menu();

	//buffer(20, 30, 50);

	return 0;
}