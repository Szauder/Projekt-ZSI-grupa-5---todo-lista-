#include "App.h"
#include "HelpCommand.h"
#include "AddCommand.h"
#include <iostream>

void App::Setup() {
    CommandsRegister::AddCommand(new HelpCommand(), "help");
    CommandsRegister::AddCommand(new AddCommand(), "add");
}

void App::MainLoop() {
    while (true) {
        UiDrawer::DrawTasksList(ActualTasks);
        UiDrawer::DrawUserInputSign();

        std::string cmdName = UserInput::ReadCommandName();
        CommandBase* cmd = CommandsRegister::GetCommandByExecName(cmdName);
        if (cmd) {
            cmd->Execute(ActualTasks);
        }
        else {
            UiDrawer::DrawLine("Nieznana komenda. Uzyj 'help' aby zobaczyc dostepne komendy.");
        }
    }
}
