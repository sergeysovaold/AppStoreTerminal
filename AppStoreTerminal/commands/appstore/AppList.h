#pragma once
#include "Command.h"

class AppList : public Command
{
public:
	AppList();
	~AppList();

	string getName() const override;
	string getDescription() const override;
	void onRun(vector<string>) override;
};