#pragma once

#include <string>

using std::string;

class Application
{
public:
	Application();
	virtual ~Application();

	virtual int getId() final;
	virtual string getName() = 0;
	virtual string getDescription() = 0;

	virtual void onInstall();
	virtual void onUninstall();

	void printLog(string str);

private:
	int m_iID;
};

