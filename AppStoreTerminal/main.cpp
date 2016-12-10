#include "AppStore.h"

#include <iostream>

extern void initApplications();

int main()
{
	AppStore *store = AppStore::instance();
	initApplications();

	std::cout << "Finded applications: " << store->getAllApplications().size() << std::endl;
	for (Application * app : store->getAllApplications()) {
		std::cout << app->getId() << ": " << app->getName() << ".   " << app->getDescription() << std::endl;
	}

	std::system("pause");
    return 0;
}

