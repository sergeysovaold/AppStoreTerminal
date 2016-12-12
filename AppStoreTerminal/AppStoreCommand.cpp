#include <iostream>

#include "AppStoreCommand.h"
#include "SubcommandManager.h"

#include "commands\appstore\SearchApp.h"
#include "commands\appstore\AppList.h"


AppStoreCommand::AppStoreCommand()
{
	// TODO: Create class SubcommandManager : public CommandManager
	// with `string getSubcommandsHelp() const`
	m_pSubManager = new SubcommandManager(this);
	m_pSubManager->add(new SearchApp());
	m_pSubManager->add(new AppList());
}

AppStoreCommand::~AppStoreCommand()
{
	delete m_pSubManager;
}

string AppStoreCommand::getName() const
{
	return string("appstore");
}

string AppStoreCommand::getHelp() const
{
	return string(
		"Manage your applications.\n"
		+ m_pSubManager->getCommandsHelp("show help")
	);

	/*return string("Manage your applications.\n"
		"\t appstore                    show help\n"
		"\t appstore list               show list of installed applications\n"
		"\t appstore search [name]      search app in store\n"
		"\t appstore install <id>       install app by its ID\n"
		"\t appstore uninstall <id>     uninstall app by its ID\n"
	);*/
}

vector<string> AppStoreCommand::getAliases() const
{
	return { "as" };
}

void AppStoreCommand::onRun(vector<string> args)
{
	if (args.empty())
	{
		std::cout << getHelp() << std::endl;
		return;
	}
}
