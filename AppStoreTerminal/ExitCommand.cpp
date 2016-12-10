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

string ExitCommand::getHelp() const
{
	return string("Format:\n\texit -  Close program");
}

void ExitCommand::onRun(vector<string> args)
{
	exit(0);
}
