#pragma once
#include "Command.h"


class ExitCommand : public Command
{
public:
	ExitCommand();
	~ExitCommand();

	virtual string getName() const;
	virtual void onRun(vector<string> args);
};
