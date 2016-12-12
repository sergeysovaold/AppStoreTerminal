#pragma once
#include "Command.h"


class HelpCommand : public Command
{
public:
	HelpCommand();
	~HelpCommand();

	string getName() const override;
	void onRun(vector<string> args) override;
	string getHelp() const override;
	string getAlias() const override;
};

