#pragma once
#include "Application.h"
class ExampleApp : public Application
{
public:
	ExampleApp();
	virtual ~ExampleApp();

	virtual string getName();
	virtual string getDescription();
	virtual void onInstall();
	virtual void onUninstall();
};

