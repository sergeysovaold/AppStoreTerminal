#include "Command.h"

Command::Command()
{
	manager = nullptr;
}

void Command::setCommandManager(const CommandManager * man)
{
	manager = man;
}

Command::~Command()
{
}

void Command::onRun(vector<string>)
{
}
