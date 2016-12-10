#pragma once
#include "Application.h"
#include "AppStore.h"


class ExampleApp : public Application
{
public:
	ExampleApp(int id);
	virtual ~ExampleApp();

	virtual string getName();
	virtual string getDescription();
	virtual void onInstall();
	virtual void onUninstall();
};
