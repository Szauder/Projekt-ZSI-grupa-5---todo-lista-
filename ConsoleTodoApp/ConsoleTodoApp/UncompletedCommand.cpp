#include "UncompletedCommand.h"
#include <iostream>

void UncompletedCommand::Execute(std::vector<Task>& tasks)
{
	int i;

	std::cout << "Numer zadania: ";
	std::cin >> i;

	if (i > 0 && i <= tasks.size())
		tasks.at(i - 1).Completed = false;
}
