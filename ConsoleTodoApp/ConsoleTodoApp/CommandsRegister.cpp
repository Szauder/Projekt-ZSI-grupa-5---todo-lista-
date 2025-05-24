#include "CommandsRegister.h"

void CommandsRegister::AddCommand(CommandBase* cmd, const std::string& execName) {
    CommandsRegister::commands[execName] = cmd;
}

CommandBase* CommandsRegister::GetCommandByExecName(const std::string& name) {
    auto it = CommandsRegister::commands.find(name);
    return it != CommandsRegister::commands.end() ? it->second : nullptr;
}

std::vector<std::string> CommandsRegister::GetAvaibleCommandsNames()
{
    auto names = std::vector<std::string>();

    for (auto pair : commands)
        names.push_back(pair.first);

    return names;
}

std::unordered_map<std::string, CommandBase*> CommandsRegister::commands = std::unordered_map<std::string, CommandBase*>();
