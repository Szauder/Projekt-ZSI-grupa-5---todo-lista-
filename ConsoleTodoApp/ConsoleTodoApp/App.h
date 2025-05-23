#ifndef APP_H
#define APP_H

#include "UiDrawer.h"
#include "UserInput.h"
#include "CommandsRegister.h"
#include "CommandBase.h"
#include "Task.h"
#include <vector>

class App {
private:
    std::vector<Task> ActualTasks;

public:
    void Setup();
    void MainLoop();
};

#endif
