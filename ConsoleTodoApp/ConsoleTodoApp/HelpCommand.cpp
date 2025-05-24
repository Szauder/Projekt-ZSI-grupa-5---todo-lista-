#include "HelpCommand.h"
#include <iostream>

void HelpCommand::Execute(std::vector<Task>&) {
    std::cout << "Dostepne komendy:\n";
    std::cout << "  help - wyswietla pomoc\n";
    std::cout << "  add - dodaje nowe zadanie\n";
}