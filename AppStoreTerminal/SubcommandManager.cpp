#include <vector>
#include <sstream>
#include "SubcommandManager.h"

#define DESCRIPTION_PADDING 4

using std::vector;
using std::pair;

SubcommandManager::SubcommandManager()
	: CommandManager()
{
	m_sParentName = "";
}

SubcommandManager::SubcommandManager(const Command* parent)
	: CommandManager()
{
	m_sParentName = parent->getName();
}

SubcommandManager::SubcommandManager(const string name)
	: CommandManager()
{
	m_sParentName = name;
}

SubcommandManager::~SubcommandManager()
{
}

string SubcommandManager::getCommandsHelp(const string emptyFirstCommandDescription = "") const
{
	std::stringstream str;
	unsigned iMaxLen = 0;
	vector<pair<string, string>> cmdsLines = {};

	cmdsLines.push_back(pair<string, string>("", emptyFirstCommandDescription));

	for (auto &it : getCommandsList())
	{
		Command *cmd = it.second;
		unsigned currLen = cmd->getName().size();

		if (currLen > iMaxLen)
			iMaxLen = currLen;

		cmdsLines.push_back(pair<string, string>(cmd->getName(), cmd->getDescription()));
	}

	for (auto &it : cmdsLines)
	{
		unsigned currLen = it.first.size();

		str << "\t" << getParentName() << " " << it.first
			<< string(iMaxLen - currLen + DESCRIPTION_PADDING, ' ')
			<< it.second << std::endl;
	}

	return string(str.str());
}

void SubcommandManager::setParentName(const string newName)
{
	m_sParentName = newName;
}

const string SubcommandManager::getParentName() const
{
	return m_sParentName;
}
