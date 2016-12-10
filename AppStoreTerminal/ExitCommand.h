#pragma once
#include "Command.h"


class ExitCommand : public Command
{
public:
	ExitCommand();
	~ExitCommand();

	string getName() const;
	string getHelp() const;
	void onRun(vector<string> args);
};
