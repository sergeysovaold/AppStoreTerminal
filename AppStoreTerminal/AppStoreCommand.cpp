#include <iostream>
#include "AppStoreCommand.h"

AppStoreCommand::AppStoreCommand()
{
}

AppStoreCommand::~AppStoreCommand()
{
}

string AppStoreCommand::getName() const
{
	return string("appstore");
}

string AppStoreCommand::getHelp() const
{
	return string("Manage your applications.\n"
		"\t appstore                    show help\n"
		"\t appstore list               show list of installed applications\n"
		"\t appstore search [name]      search app in store\n"
		"\t appstore install <id>       install app by its ID\n"
		"\t appstore uninstall <id>     uninstall app by its ID\n"
	);
}

vector<string> AppStoreCommand::getAliases() const
{
	return { "as", "store" };
}

void AppStoreCommand::onRun(vector<string> args)
{
	if (args.empty())
	{
		std::cout << getHelp() << std::endl;
		return;
	}
}
