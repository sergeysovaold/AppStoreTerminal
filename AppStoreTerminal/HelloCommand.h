#pragma once
#include "Command.h"

class HelloCommand : public Command
{
public:
	HelloCommand();
	~HelloCommand();

	virtual string getName() const;
	virtual void onRun(vector<string> args);
};

