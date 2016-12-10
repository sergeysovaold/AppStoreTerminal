#include <iostream>
#include "HelpCommand.h"
#include "CommandManager.h"

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
		std::cout << "Available commands:" << std::endl;
		for (auto &it : getManager()->getCommandsList())
		{
			Command *p = it.second;
			std::cout << "   " << p->getName() << std::endl;
		}
	}
	else
	{
		std::cout << "Please, use \"help\" command without parameters" << std::endl;
	}
}
