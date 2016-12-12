#include "DemoApplication.h"



DemoApplication::DemoApplication(int id)
	: Application(id)
{
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
