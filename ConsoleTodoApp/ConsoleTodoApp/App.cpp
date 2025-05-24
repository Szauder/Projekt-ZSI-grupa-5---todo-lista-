#include "App.h"
#include <iostream>
#include "HelpCommand.h"
#include "AddCommand.h"
#include "CompletedCommand.h"
#include "UncompletedCommand.h"

void App::Setup() {
    CommandsRegister::AddCommand(new HelpCommand(), "help");
    CommandsRegister::AddCommand(new AddCommand(), "add");
    CommandsRegister::AddCommand(new CompletedCommand(), "com");
    CommandsRegister::AddCommand(new CompletedCommand(), "completed");
    CommandsRegister::AddCommand(new UncompletedCommand(), "uncom");
    CommandsRegister::AddCommand(new UncompletedCommand(), "uncompleted");
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
        else if (cmdName.length() > 0) {
            UiDrawer::DrawLine("Nieznana komenda. Uzyj 'help' aby zobaczyc dostepne komendy.");
            system("pause");
        }
    }
}
