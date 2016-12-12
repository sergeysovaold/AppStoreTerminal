#include <iostream>
#include "HelloCommand.h"


HelloCommand::HelloCommand()
{
}

HelloCommand::~HelloCommand()
{
}

string HelloCommand::getName() const
{
	return string("hello");
}

string HelloCommand::getHelp() const
{
	return string("Format:\n\thello <name> -  Show greetings for name");
}

void HelloCommand::onRun(vector<string> args)
{
	if (!args.empty())
		std::cout << "Hello " << args.front() << std::endl;
	else
		std::cout << "Please provide second argument!" << std::endl;
}
