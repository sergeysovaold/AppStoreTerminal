#include "Command.h"
#include "CommandManager.h"

Command::Command()
{
	m_pManager = nullptr;
}

const CommandManager* Command::getManager() const
{
	return m_pManager;
}

void Command::setCommandManager(const CommandManager * man)
{
	m_pManager = man;
}

Command::~Command()
{
}

//==================================================================================
// Callback executes when command was fired
//==================================================================================
void Command::onRun(vector<string>)
{
}

//==================================================================================
// Get lines with help
//==================================================================================
string Command::getHelp() const
{
	return string("");
}

string Command::getDescription() const
{
	return string();
}

//==================================================================================
// Single alias for command
//==================================================================================
string Command::getAlias() const
{
	return string();
}

//==================================================================================
// List of aliases for specified command
//==================================================================================
vector<string> Command::getAliases() const
{
	return vector<string>();
}
