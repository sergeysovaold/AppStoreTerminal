#include <vector>
#include <sstream>
#include "SubcommandManager.h"

#define DESCRIPTION_PADDING 4

using std::vector;
using std::pair;

SubcommandManager::SubcommandManager(const Command* parent)
	: m_pParent(parent), CommandManager()
{
}

SubcommandManager::~SubcommandManager()
{
}

string SubcommandManager::getCommandsHelp() const
{
	std::stringstream str;
	unsigned iMaxLen = 0;
	vector<pair<string, string>> cmdsLines = {};

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

		str << "\t" << m_pParent->getName() << " " << it.first
			<< string(iMaxLen - currLen + DESCRIPTION_PADDING, ' ')
			<< it.second << std::endl;
	}

	return string(str.str());
}
