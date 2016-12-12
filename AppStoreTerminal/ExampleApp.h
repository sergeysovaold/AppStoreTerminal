#pragma once
#include "Application.h"
#include "AppStore.h"


class ExampleApp : public Application
{
public:
	ExampleApp(int id);
	virtual ~ExampleApp();

	string getName() const override;
	string getDescription() const override;
	void onInstall() override;
	void onUninstall() override;
};
