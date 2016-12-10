#include <iostream>
#include "Application.h"

Application::Application()
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

void Application::onDestroy()
{
}

void Application::printLog(string str)
{
	std::cout << "[" << getName() << "]: "
		<< str << std::endl;
}
