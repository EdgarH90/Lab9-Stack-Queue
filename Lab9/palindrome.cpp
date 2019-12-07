/*******************************************************************************
** Author:       Edgar Hernandez
** Date:         11/30/2019
** Description:  This program contains the implementation for the stack palindrome function.
** The function takes in a string from the user as a parameter and returns a string with
** the palindrome.
*******************************************************************************/
#include "palindrome.hpp"


std::stack <std::string, std::vector<std::string> > palStack;

std::string palindromeFunc(std::string stringIn)
{
	//Declares the variable for the palindrome string
	std::string stringOut = "";
	
	//Loop through each character in the input string and add to stack
	for (char const& c : stringIn)
	{
		//Converts the individual character back into a string
		std::string convertStr(1, c);

		//Add character sequentially to stack and palindrome string
		stringOut += convertStr;
		palStack.push(convertStr);
	}
	
	//Pop characters out and add to palindrome string until empty
	while (!palStack.empty())
	{
		stringOut += palStack.top();
		palStack.pop();
	}

	return stringOut; //Return the complete palindrome
}