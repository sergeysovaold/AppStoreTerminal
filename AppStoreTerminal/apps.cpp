#include <iostream>
#include "AppStore.h"

#include "ExampleApp.h"

void initApplications()
{
	AppStore *p = AppStore::instance();

	p->publish(new ExampleApp(p->nextId()));
	p->publish(new ExampleApp(p->nextId()));
	std::cout << p->getAllApplications().size() << std::endl;
}