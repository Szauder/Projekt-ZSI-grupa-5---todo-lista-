#ifndef ADDCOMMAND_H
#define ADDCOMMAND_H

#include "CommandBase.h"

class AddCommand : public CommandBase {
public:
    void Execute(std::vector<Task>& tasks) override;
};

#endif