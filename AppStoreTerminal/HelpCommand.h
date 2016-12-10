#pragma once
#include "Command.h"


class HelpCommand : public Command
{
public:
	HelpCommand();
	~HelpCommand();

	virtual string getName() const;
	virtual void onRun(vector<string> args);
};

