#include <iostream>
#include "ExitCommand.h"

ExitCommand::ExitCommand()
{
}

ExitCommand::~ExitCommand()
{
}

string ExitCommand::getName()
{
	return string("exit");
}

void ExitCommand::onRun(vector<string> args, const CommandManager *manager)
{
	exit(0);
}
