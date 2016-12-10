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

void HelloCommand::onRun(vector<string> args)
{
	if (!args.empty())
		std::cout << "Hello " << args.front() << std::endl;
	else
		std::cout << "Please provide second argument!" << std::endl;
}
