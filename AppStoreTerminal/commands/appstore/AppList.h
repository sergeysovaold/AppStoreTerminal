#pragma once
#include "BaseAppStoreCommand.h"

class AppList : public BaseAppStoreCommand
{
public:
	AppList();
	~AppList();

	string getName() const;
	string getDescription() const;
	void onRun(vector<string>) const;
};