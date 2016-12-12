#include <iostream>
#include "SearchApp.h"


SearchApp::SearchApp()
{
}

SearchApp::~SearchApp()
{
}

string SearchApp::getName() const
{
	return string("search");
}

string SearchApp::getDescription() const
{
	return string("search app in store");
}

void SearchApp::onRun(vector<string>)
{
	std::cout << "[Not implemented yet]" << std::endl;
}
