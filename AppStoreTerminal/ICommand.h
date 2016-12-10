#pragma once
#include <string>
#include <vector>

#include "CommandManager.h"

using std::string;
using std::vector;

class ICommand
{
public:
	virtual void onRun(vector<string>, const CommandManager *manager) = 0;
	virtual string getName() = 0;
};

