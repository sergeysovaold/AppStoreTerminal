#include <iostream>
#include "applications.h"
#include "AppStore.h"

#include "applications\DemoApplication.h"
#include "applications\ExampleApp.h"

void initApplications()
{
	AppStore *p = AppStore::instance();

	p->publish(new ExampleApp(p->nextId()));
	p->publish(new DemoApplication(p->nextId()));

}