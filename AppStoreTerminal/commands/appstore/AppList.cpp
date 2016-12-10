#include <iostream>
#include "AppList.h"


AppList::AppList()
{
}

AppList::~AppList()
{
}

string AppList::getName() const
{
	return string("list");
}

string AppList::getDescription() const
{
	return string("show list of installed applications");
}

void AppList::onRun(vector<string>) const
{
	std::cout << "[Not implemented yet]" << std::endl;
}
