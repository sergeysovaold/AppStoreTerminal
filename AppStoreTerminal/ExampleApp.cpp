#include "ExampleApp.h"

ExampleApp::ExampleApp(int id)
	: Application(id)
{
}

ExampleApp::~ExampleApp()
{
}

string ExampleApp::getName()
{
	return string("Example");
}

string ExampleApp::getDescription()
{
	return string("Application created for stub only.");
}

void ExampleApp::onInstall()
{
	printLog(string("Example app installed!"));
}

void ExampleApp::onUninstall()
{
	printLog(string("Example app uninstalled!"));
}

