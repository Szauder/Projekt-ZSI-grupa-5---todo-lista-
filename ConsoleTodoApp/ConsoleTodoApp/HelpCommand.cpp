#include "HelpCommand.h"
#include <iostream>
#include "CommandsRegister.h"

void HelpCommand::Execute(std::vector<Task>&) {
    std::cout << "Dostepne komendy:\n";
    
	for (auto name : CommandsRegister::GetAvaibleCommandsNames())
		std::cout << name << std::endl;

	system("pause >nul");
}