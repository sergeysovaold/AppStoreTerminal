#include "commands.h"

#include "ExitCommand.h"
#include "HelloCommand.h"
#include "HelpCommand.h"
#include "AppStoreCommand.h"


void installCommands(CommandManager *manager)
{
	manager->add(new ExitCommand());
	manager->add(new HelloCommand());
	manager->add(new HelpCommand());
	manager->add(new AppStoreCommand());
}