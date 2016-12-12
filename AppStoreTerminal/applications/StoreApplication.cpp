#include "StoreApplication.h"
#include "commands\AppStoreCommand.h"

StoreApplication::StoreApplication(int id)
	: Application(id)
{
	addCommand(new AppStoreCommand());
}

StoreApplication::~StoreApplication()
{
}

string StoreApplication::getName() const
{
	return string("Application Store");
}

string StoreApplication::getDescription() const
{
	return string("Manage your applications");
}
