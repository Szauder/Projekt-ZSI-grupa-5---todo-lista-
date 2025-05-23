#include "UserInput.h"
#include <iostream>

std::string UserInput::ReadCommandName() {
    std::string input;
    std::getline(std::cin, input);
    return input;
}

std::string UserInput::ReadString() {
    std::string input;
    std::getline(std::cin, input);
    return input;
}
