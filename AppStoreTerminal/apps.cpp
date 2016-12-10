#include "apps.h"
#include "AppStore.h"

#include "ExampleApp.h"

void addAppsToAppStore()
{
	AppStore p = AppStore::instance();
	p.publish(new ExampleApp(p.nextId()));
	p.publish(new ExampleApp(p.nextId()));
}