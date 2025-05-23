#ifndef COMMANDBASE_H
#define COMMANDBASE_H

#include <vector>
#include "Task.h"

class CommandBase {
public:
    virtual void Execute(std::vector<Task>& tasks) = 0;
    virtual ~CommandBase() = default;
};

#endif
