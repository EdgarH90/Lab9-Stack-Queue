/*******************************************************************************
** Author:       Edgar Hernandez
** Date:         11/15/2019
** Description:  This program contains the specification for the menu functions.
** It contains the main menu for the Queue program and a submenu to display
** the options for each specific function.
*******************************************************************************/
#ifndef MENU_HPP
#define MENU_HPP
#include <string>
#include "queueBuffer.hpp"
#include "palindrome.hpp"

void menu();

void subMenu(int& userChoice, std::string& error);

#endif