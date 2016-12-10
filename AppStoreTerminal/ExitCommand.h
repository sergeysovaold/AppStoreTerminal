#pragma once
#include "Command.h"


class ExitCommand : public Command
{
public:
	ExitCommand();
	~ExitCommand();

	string getName() const;
	string getHelp() const;
	string getAlias() const;
	void onRun(vector<string> args);
};
