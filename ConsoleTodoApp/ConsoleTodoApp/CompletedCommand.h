#pragma once
#include "CommandBase.h"

class CompletedCommand : public CommandBase
{
public:
	void Execute(std::vector<Task>& tasks) override;
};

