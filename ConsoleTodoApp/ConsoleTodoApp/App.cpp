#include "App.h"
#include "HelpCommand.h"
#include "AddCommand.h"
#include <iostream>

void App::Setup() {
    register_.AddCommand(new HelpCommand(), "help");
    register_.AddCommand(new AddCommand(), "add");
}

void App::MainLoop() {
    while (true) {
        drawer.DrawTasksList(ActualTasks);
        drawer.DrawUserInputSign();

        std::string cmdName = input.ReadCommandName();
        CommandBase* cmd = register_.GetCommandByExecName(cmdName);
        if (cmd) {
            cmd->Execute(ActualTasks);
        }
        else {
            drawer.DrawLine("Nieznana komenda. Uzyj 'help' aby zobaczyc dostepne komendy.");
        }
    }
}
