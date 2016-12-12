#include <iostream>
#include "Application.h"
#include "SubcommandManager.h"


Application::Application(int id) : m_iID(id)
{
	m_Commands = new SubcommandManager();
}

Application::~Application()
{
	delete m_Commands;
}

int Application::getId() const
{
	return m_iID;
}

const SubcommandManager* Application::getCommands() const
{
	return m_Commands;
}

void Application::addCommand(Command* command)
{
	m_Commands->add(command);
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
