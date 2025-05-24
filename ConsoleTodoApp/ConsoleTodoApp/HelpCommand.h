#ifndef HELPCOMMAND_H
#define HELPCOMMAND_H

#include "CommandBase.h"

class HelpCommand : public CommandBase {
public:
    void Execute(std::vector<Task>& tasks) override;
};

#endif