#pragma once
#include <string>
#include <vector>
#include <map>

#include "ICommand.h"

using std::string;
using std::vector;
using std::map;

typedef std::pair<string, ICommand*> CommandPair;

class CommandManager
{
public:
	CommandManager();
	virtual ~CommandManager();

	bool commandWaitAndExecute();
	void add(ICommand *cmd);
	ICommand* find(const string cmdName) const;

protected:
	string getLineGreeting() const;
	void splitCommand(string, vector<string>&) const;

	map<string, ICommand *> m_List;
};
