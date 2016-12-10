#pragma once
#include "Command.h"


class HelpCommand : public Command
{
public:
	HelpCommand();
	~HelpCommand();

	string getName() const;
	void onRun(vector<string> args);
	string getHelp() const;
};

