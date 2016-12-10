#include "commands.h"

#include "ExitCommand.h"
#include "HelloCommand.h"


void installCommands(CommandManager *manager)
{
	manager->add(new ExitCommand());
	manager->add(new HelloCommand());
}