#include <iostream>
#include "HelloCommand.h"


HelloCommand::HelloCommand()
{
}

HelloCommand::~HelloCommand()
{
}

string HelloCommand::getName()
{
	return string("hello");
}

void HelloCommand::onRun(vector<string> args, const CommandManager *manager)
{
	if (!args.empty())
		std::cout << "Hello " << args.front() << std::endl;
	else
		std::cout << "Please provide second argument!" << std::endl;
}
