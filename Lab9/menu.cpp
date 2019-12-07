/*******************************************************************************
** Author:       Edgar Hernandez
** Date:         11/30/2019
** Description:  This program contains the specification for the menu functions.
** It contains the main menu for stack palindrome and queue buffer functions and a
** submenu to display the options for each specific function.
*******************************************************************************/
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <climits>
#include "menu.hpp"
#include "inputValidation.hpp"


// The function takes validates the user's choice and passes the value to the submenu
void menu()
{
	
	int status = 0;
	std::string errorMsg = "Please select a valid integer and press enter.";

	while (status != 3)
	{
		std::cout << "Please select the number for the function you would " <<
			"like to run and press enter: " << std::endl;

		//User choices
		std::cout << "1. Create a palindrome." << std::endl;
		std::cout << "2. Test the buffer." << std::endl;
		std::cout << "3. Exit." << std::endl;
		inputValidation(status, errorMsg, 1, 3);

		if (status != 3)
		{
			subMenu(status, errorMsg);
		}
	}
}

//This function runs the Queue functions based on the user input
void subMenu(int& userChoice, std::string& error)
{
	if (userChoice == 1)
	{
		//Initialize the string for user input
		std::string userstrIn = "";

		std::cout << "Please enter the string for the palindrome."
			<< std::endl;

		std::getline(std::cin, userstrIn);

		//Run palindrome string function and reset to menu
		std::cout<< palindromeFunc(userstrIn) << std::endl;
	}
	else
	{
		////Initialize the variables needed for the queue function
		int rounds = 0, addPercent = 0, removePercent = 0;


		std::cout << "How many rounds would you like to simulate? (max of 50) \n";
		inputValidation(rounds, error, 1, 50);

		std::cout << "Enter the percentage chance to put a randomly generated number \n" <<
			"at the end of the buffer. Use whole numbers from 1-100." << std::endl;
		inputValidation(addPercent, error, 1, 100);

		std::cout << "Enter the percentage chance to take out a randomly generated number \n" <<
			"at the front of the buffer. Use whole numbers from 1-100." << std::endl;
		inputValidation(removePercent, error, 1, 100);

		buffer(rounds, addPercent, removePercent);

	}

	//Repeat options
	std::cout << "Would you like to run another function?" << std::endl;
	std::cout << std::setw(10) << "1. Yes " << "2. No " << std::endl;
	inputValidation(userChoice, error, 1, 2);

	if (userChoice == 2)
	{
		userChoice = 3;
	}
}