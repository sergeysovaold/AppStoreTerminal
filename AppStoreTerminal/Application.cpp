#include <iostream>
#include "Application.h"

Application::Application(int id) : m_iID(id)
{
}

Application::~Application()
{
}

int Application::getId() const
{
	return m_iID;
}

bool Application::hasCommands() const
{
	return false;
}

vector<Command> Application::getCommandsList() const
{
	return vector<Command>();
}

void Application::onInstall()
{
}

void Application::onUninstall()
{
}

void Application::onPublish()
{
}

void Application::onDestroy()
{
}

void Application::printLog(string str) const
{
	std::cout << "#" << getId() << " [" << getName() << "]: "
		<< str << std::endl;
}
