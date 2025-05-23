#ifndef USERINPUT_H
#define USERINPUT_H

#include <string>

class UserInput {
public:
    static std::string ReadCommandName();
    static std::string ReadString();
};

#endif
