#pragma once
#include <string>
#include <vector>

extern class CommandManager;

using std::string;
using std::vector;

class Command
{
public:
	Command();
	virtual ~Command();

	virtual void onRun(vector<string>);
	virtual string getName() const = 0;

private:
	const CommandManager* manager;
	void setCommandManager(const CommandManager *);
	
	friend class CommandManager;
};

