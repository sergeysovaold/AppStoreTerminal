#pragma once

#include <string>

using std::string;

class Application
{
public:
	virtual int getId() final;
	virtual string getName() = 0;
	virtual string getDescription() = 0;

	virtual void onInstall();
	virtual void onUninstall();

	virtual void onDestroy();

	virtual void printLog(string str) final;

protected:
	Application(int id);
	virtual ~Application();

private:
	int m_iID;

	friend class AppStore;
};

