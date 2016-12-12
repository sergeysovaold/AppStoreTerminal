#include <iostream>
#include <signal.h>
#include <stdlib.h>

#include "AppStore.h"
#include "CommandManager.h"

#include "applications\applications.h"
#include "commands\commands.h"


void handleSignal(int signal)
{
	std::printf("Caught signal %d\n", signal);
	exit(1);
}

void main()
{
	auto *manager = new CommandManager();
	auto *store = new AppStore();

	loadApplications(store);
	installCommands(manager);

	signal(SIGINT, handleSignal);

	while (manager->commandWaitAndExecute())
	{
	}

	std::system("pause");
}