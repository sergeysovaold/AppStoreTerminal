#pragma once
#include "Command.h"
#include "CommandManager.h"

class AppStoreCommand : public Command
{
public:
	AppStoreCommand();
	~AppStoreCommand();

	string getName() const;
	string getHelp() const;
	vector<string> getAliases() const;
	void onRun(vector<string> args);

};

