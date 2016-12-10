#pragma once
#include "ICommand.h"

class HelloCommand : public ICommand
{
public:
	HelloCommand();
	~HelloCommand();

	virtual string getName();
	virtual void onRun(vector<string> args, const CommandManager *manager);
};

