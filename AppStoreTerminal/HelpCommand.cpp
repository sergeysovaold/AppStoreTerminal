#include <iostream>
#include "HelpCommand.h"


HelpCommand::HelpCommand()
{
}

HelpCommand::~HelpCommand()
{
}

string HelpCommand::getName() const
{
	return string("help");
}

void HelpCommand::onRun(vector<string> args)
{
	if (args.empty())
	{
		
	}
	else
	{
		std::cout << "Please, use \"help\" command without parameters" << std::endl;
	}
}
