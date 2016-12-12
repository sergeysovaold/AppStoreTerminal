#pragma once
#include <string>
#include <vector>

#include "Command.h"

using std::string;
using std::vector;

class Application
{
public:
	virtual int getId() const final;
	virtual string getName() const = 0;
	virtual string getDescription() const = 0;

	virtual bool hasCommands() const;
	virtual vector<Command> getCommandsList() const;

	virtual void onInstall();
	virtual void onUninstall();

	virtual void onPublish();
	virtual void onDestroy();

	virtual void printLog(string str) const final;

protected:
	Application(int id);
	virtual ~Application();

private:
	int m_iID;

	friend class AppStore;
};

