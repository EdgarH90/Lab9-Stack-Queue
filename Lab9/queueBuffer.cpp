/*******************************************************************************
** Author:       Edgar Hernandez
** Date:         11/30/2019
** Description:  This program contains the implementation for the queue buffer.
** The buffer simulation starts with no value and then gets the user input for
** number of rounds, % chance of placing randomly generated number at the end of
** the buffer, and the % chance of taking out a randomly generated number at the front.
*******************************************************************************/
#include "queueBuffer.hpp"

std::queue <int> buffQueue;

void buffer(int roundsIn, int addpercentIn, int removepercentIn)
{
	
	//Initialize the variables for the length
	double totalLength = 0, averageLength = 0;

	//Run simulation based on number of rounds
	for (int i = 1; i <= roundsIn; i++)
	{
		//Initialize the random number between 1-1000 and the percentage number
		int randNum = rand() % 1000 + 1;
		int percentNum = rand() % 100 + 1;

		if (percentNum <= addpercentIn)
		{
			buffQueue.push(randNum);
		}

		//Regenerate the percentage number
		percentNum = rand() % 100 + 1;

		if (percentNum <= removepercentIn)
		{
			if (!buffQueue.empty())
			{
				buffQueue.pop();
			}
		}

		//Create temporary queue to hold and print current values
		std::queue <int> tempQueue = buffQueue;
		std::cout << "Values in buffer: ";

		//Loop through values if buffer is not empty
		if (!tempQueue.empty())
		{
			while (!tempQueue.empty())
			{
				std::cout << tempQueue.front() << " ";
				tempQueue.pop();
			}
			std::cout << std::endl;
		}
		else
		{
			std::cout << " None" << std::endl;
		}
		//Output current length of buffer
		std::cout << "Current length of buffer: " << buffQueue.size() << std::endl;
		totalLength += buffQueue.size();

		//Calculate average length for each round
		averageLength = totalLength / i;
		std::cout << "Average length of buffer: " << averageLength << "\n" << std::endl;
	}
}