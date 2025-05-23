#include "CommandsRegister.h"

void CommandsRegister::AddCommand(CommandBase* cmd, const std::string& execName) {
    commands[execName] = cmd;
}

CommandBase* CommandsRegister::GetCommandByExecName(const std::string& name) {
    auto it = commands.find(name);
    return it != commands.end() ? it->second : nullptr;
}

CommandsRegister::~CommandsRegister() {
    for (auto it = commands.begin(); it != commands.end(); ++it)
        delete it->second;
}
