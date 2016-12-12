#include <iostream>
#include <sstream>
#include "AppStoreCommand.h"

#include "commands\appstore\SearchApp.h"
#include "commands\appstore\AppList.h"

AppStoreCommand::AppStoreCommand()
{
	// TODO: Create class SubcommandManager : public CommandManager
	// with `string getSubcommandsHelp() const`
	m_pSubManager = new CommandManager();
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
	std::stringstream str;
	unsigned int iMaxLen = 0;

	str << "Manage your applications.\n";

	// TODO: rewrite to single for of commands
	// maybe: vector<pair<string, string>> - name, description

	for (auto &it : m_pSubManager->getCommandsList())
	{
		Command *p = it.second;
		unsigned int currLen = p->getName().size();

		if (currLen > iMaxLen)
			iMaxLen = currLen;
	}

	str << "\t appstore " << string(iMaxLen, ' ')
		<< "    show this help" << std::endl;

	for (auto &it : m_pSubManager->getCommandsList())
	{
		Command *p = it.second;
		unsigned int currLen = p->getName().size();
		
		str << "\t appstore " << p->getName() << string(iMaxLen - currLen, ' ')
			<< "    " << p->getDescription() << std::endl;
	}

	return string(str.str());

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
