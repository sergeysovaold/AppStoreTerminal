#include <iostream>
#include "applications.h"
#include "AppStore.h"

#include "applications\DemoApplication.h"
#include "applications\ExampleApp.h"

void loadApplications(AppStore *as)
{
	as->publish(new ExampleApp(as->nextId()));
	as->publish(new DemoApplication(as->nextId()));
}