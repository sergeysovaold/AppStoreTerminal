#pragma once
#include "Command.h"


class ExitCommand : public Command
{
public:
	ExitCommand();
	~ExitCommand();

	string getName() const override;
	string getHelp() const override;
	string getAlias() const override;
	void onRun(vector<string> args) override;
};
