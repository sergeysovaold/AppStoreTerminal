#pragma once
#include "ICommand.h"


class ExitCommand : public ICommand
{
public:
	ExitCommand();
	~ExitCommand();

	virtual string getName();
	virtual void onRun(vector<string> args, const CommandManager *manager);
};
