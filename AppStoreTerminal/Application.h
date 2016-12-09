#pragma once

#include <string>

using std::string;

class Application
{
public:
	Application();
	~Application();

	int getId();
	virtual string getName() = 0;
	virtual string getDescription() = 0;

	virtual void onInstall();
	virtual void onUninstall();

private:
	int m_iID;
};

