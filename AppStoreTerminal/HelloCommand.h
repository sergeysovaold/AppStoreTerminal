#pragma once
#include "Command.h"

class HelloCommand : public Command
{
public:
	HelloCommand();
	~HelloCommand();

	string getName() const override;
	string getHelp() const override;
	void onRun(vector<string> args) override;
};

