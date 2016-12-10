#include <iostream>
#include "Application.h"

Application::Application(int id) : m_iID(id)
{
}

Application::~Application()
{
}

int Application::getId()
{
	return m_iID;
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

void Application::printLog(string str)
{
	std::cout << "#" << getId() << " [" << getName() << "]: "
		<< str << std::endl;
}
