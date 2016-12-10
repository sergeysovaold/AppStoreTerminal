#pragma once
#include "Command.h"

class HelloCommand : public Command
{
public:
	HelloCommand();
	~HelloCommand();

	string getName() const;
	string getHelp() const;
	void onRun(vector<string> args);
};

