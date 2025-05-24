#pragma once
#include "CommandBase.h"

class UncompletedCommand : public CommandBase
{
public:
	void Execute(std::vector<Task>& tasks) override;
};

