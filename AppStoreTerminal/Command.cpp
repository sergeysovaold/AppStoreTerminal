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

void Command::onRun(vector<string>)
{
}
