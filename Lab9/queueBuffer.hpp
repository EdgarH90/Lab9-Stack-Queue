/*******************************************************************************
** Author:       Edgar Hernandez
** Date:         11/30/2019
** Description:  This program contains the specification for the queue buffer.
** The buffer simulation starts with no value and then gets the user input for
** number of rounds, % chance of placing randomly generated number at the end of
** the buffer, and the % chance of taking out a randomly generated number at the front.
*******************************************************************************/
#include <iostream>
#include <queue>
#include <vector>
#include <list>
#include "inputValidation.hpp"
#ifndef QUEUEBUFFER_HPP
#define QUEUEBUFFER_HPP

void buffer(int roundsIn, int addpercentIn, int removepercentIn);

#endif
