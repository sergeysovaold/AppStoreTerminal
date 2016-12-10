#include <iostream>
#include "ExitCommand.h"

ExitCommand::ExitCommand()
{
}

ExitCommand::~ExitCommand()
{
}

string ExitCommand::getName() const
{
	return string("exit");
}

void ExitCommand::onRun(vector<string> args)
{
	exit(0);
}
