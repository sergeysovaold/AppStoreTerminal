#include <iostream>
#include "AppStore.h"

#include "ExampleApp.h"
#include "DemoApplication.h"

void initApplications()
{
	AppStore *p = AppStore::instance();

	p->publish(new ExampleApp(p->nextId()));
	p->publish(new DemoApplication(p->nextId()));

}