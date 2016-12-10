#include <iostream>
#include <sstream>

#include "CommandManager.h"

CommandManager::CommandManager()
{
	m_List = {};
}

CommandManager::~CommandManager()
{
	for (auto it = m_List.cbegin(); it != m_List.cend(); )
	{
		delete it->second;
		m_List.erase(it++);
	}
}

bool CommandManager::commandWaitAndExecute()
{
	std::cout << getLineGreeting();
	char command[1024];
	std::cin.getline(command, 1024);

	vector<string> list = {};
	splitCommand(string(command), list);

	if (list.empty()) return true;

	string cmd = list.front();

	if (!cmd.empty())
	{
		list.erase(list.begin());
		Command *command = find(cmd);

		if (!command) {
			std::cout << "Command \"" << cmd << "\" not found!" << std::endl;
			return true;
		}

		vector<string> args = {};
		for (auto it = list.begin(); it != list.end(); ++it)
			args.push_back(*it);

		command->onRun(args);
	}

	return true;
}

void CommandManager::add(Command * cmd)
{
	cmd->setCommandManager(this);
	m_List.insert(std::pair<string, Command*>(cmd->getName(), cmd));

	if (cmd->getAlias().size() != 0)
	{
		m_List.insert(std::pair<string, Command*>(cmd->getAlias(), cmd));
	}

	if (!cmd->getAliases().empty())
	{
		for (auto &it : cmd->getAliases())
		{
			m_List.insert(std::pair<string, Command*>(it, cmd));
		}
	}
}

Command* CommandManager::find(const string cmdName) const
{
	auto it = m_List.find(cmdName);

	if (it == m_List.end())
		return nullptr;

	return it->second;
}

const map<string, Command*> CommandManager::getCommandsList() const
{
	return m_List;
}

string CommandManager::getLineGreeting() const
{
	return string("$> ");
}

void CommandManager::splitCommand(string line, vector<string> &list) const
{
	std::stringstream strstr;
	strstr.str(line);
	string item;
	
	while (std::getline(strstr, item, ' '))
	{
		list.push_back(item);
	}
}