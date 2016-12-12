#pragma once
#include "Command.h"

class SearchApp : public Command
{
public:
	SearchApp();
	~SearchApp();

	string getName() const override;
	string getDescription() const override;
	void onRun(vector<string>) override;
};

