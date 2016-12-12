#include "commands.h"

#include "ExitCommand.h"
#include "HelloCommand.h"
#include "HelpCommand.h"
#include "AppStoreCommand.h"

#include <iostream>

void installCommands(CommandManager *manager)
{
	manager->add(new ExitCommand());
	manager->add(new HelloCommand());
	manager->add(new HelpCommand());
	manager->add(new AppStoreCommand());
}

void installApplicationsCommands(const AppList apps, CommandManager *manager)
{
	for (auto &app : apps)
	{
		auto *commands = app->getCommands();
		// TODO: add single app command
		if (commands) {
			for (auto &it : commands->getCommandsList())
			{
				Command* cmd = it.second;
				manager->add(cmd);
			}
		}
	}
}