#pragma once
#include "BaseAppStoreCommand.h"

class SearchApp : public BaseAppStoreCommand
{
public:
	SearchApp();
	~SearchApp();

	string getName() const;
	string getDescription() const;
	void onRun(vector<string>) const;
};

