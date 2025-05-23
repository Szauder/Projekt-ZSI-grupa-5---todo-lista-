#ifndef COMMANDSREGISTER_H
#define COMMANDSREGISTER_H

#include <string>
#include <unordered_map>
#include "CommandBase.h"

class CommandsRegister {
private:
    std::unordered_map<std::string, CommandBase*> commands;
public:
    void AddCommand(CommandBase* cmd, const std::string& execName);
    CommandBase* GetCommandByExecName(const std::string& name);
    ~CommandsRegister();
};

#endif
