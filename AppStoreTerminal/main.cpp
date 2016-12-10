#include <iostream>
#include <signal.h>
#include <stdlib.h>

#include "AppStore.h"
#include "CommandManager.h"
#include "commands.h"

extern void initApplications();

#ifdef OLDMAIN
int main()
{
	AppStore *store = AppStore::instance();
	initApplications();

	std::cout << "Finded applications: " << store->getAllApplications().size() << std::endl;
	for (Application * app : store->getAllApplications()) {
		std::cout << app->getId() << ": " << app->getName() << std::endl;
	}

	std::cout << std::endl << "$> ";
	char b[100];
	std::cin.getline(b, 100);

	string command = string(b);

	std::cout << std::endl << command << std::endl;

	std::system("pause");
    return 0;
}
#endif

void handleSignal(int signal)
{
	std::printf("Caught signal %d\n", signal);
	exit(1);
}

void main()
{
	auto *manager = new CommandManager();
	installCommands(manager);

	signal(SIGINT, handleSignal);


	while (manager->commandWaitAndExecute())
	{
	}

	std::system("pause");
}