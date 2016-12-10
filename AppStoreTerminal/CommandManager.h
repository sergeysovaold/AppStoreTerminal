#pragma once
#include <string>
#include <vector>
#include <map>

#include "Command.h"

using std::string;
using std::vector;
using std::map;

class CommandManager
{
public:
	CommandManager();
	virtual ~CommandManager();

	bool commandWaitAndExecute();
	void add(Command *cmd);
	Command* find(const string cmdName) const;

protected:
	string getLineGreeting() const;
	void splitCommand(string line, vector<string>& args) const;

	map<string, Command *> m_List;
};
