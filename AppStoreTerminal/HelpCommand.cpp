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
			string alias = it.first;
			
			if (p->getName().compare(alias) == 0)
				std::cout << "   " << p->getName() << std::endl;
			else
				std::cout << "   " << alias << "    -> " << p->getName() << std::endl;
		}
	}
	else if (args.size() == 1)
	{
		Command *cmd = getManager()->find(args.front());

		if (!cmd)
		{
			std::cout << "Command \"" << args.front() << "\" not found." << std::endl;
			return;
		}
		else
		{
			string help = cmd->getHelp();

			if (help.size() == 0)
			{
				std::cout << "No help for \"" << cmd->getName() << "\"" << std::endl;
				return;
			}

			std::cout << help << std::endl;
		}
	}
	else
	{
		std::cout << "Too many arguments provided." << std::endl << getHelp() << std::endl;
	}
}

string HelpCommand::getHelp() const
{
	return string("Command help has format:\n\thelp -            Show available commands\n\thelp [command] -  Show help for specified command");
}
