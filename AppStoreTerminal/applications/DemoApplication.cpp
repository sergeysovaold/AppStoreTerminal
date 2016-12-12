#include <iostream>
#include "DemoApplication.h"
#include "Command.h"
#include "SubcommandManager.h"

class DemoCommand : public Command
{
public:
	DemoCommand() : Command() {};
	virtual ~DemoCommand() {};

	string getName() const override { return "foo"; }
	void onRun(vector<string> args) override
	{
		std::cout << "Demo-demo executed!" << std::endl;
	};
};


DemoApplication::DemoApplication(int id)
	: Application(id)
{
	addCommand(new DemoCommand());
}


DemoApplication::~DemoApplication()
{
}

string DemoApplication::getName() const
{
	return string("Demo");
}

string DemoApplication::getDescription() const
{
	return string("Demo application for new AppStore");
}

