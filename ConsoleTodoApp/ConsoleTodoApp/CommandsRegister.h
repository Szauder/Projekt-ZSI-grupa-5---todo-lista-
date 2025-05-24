#ifndef COMMANDSREGISTER_H
#define COMMANDSREGISTER_H

#include <string>
#include <unordered_map>
#include "CommandBase.h"

class CommandsRegister {
    static std::unordered_map<std::string, CommandBase*> commands;

public:
    static void AddCommand(CommandBase* cmd, const std::string& execName);
    static CommandBase* GetCommandByExecName(const std::string& name);
    static std::vector<std::string> GetAvaibleCommandsNames();
};

#endif