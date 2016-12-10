#include "DemoApplication.h"



DemoApplication::DemoApplication(int id)
	: Application(id)
{
}


DemoApplication::~DemoApplication()
{
}

string DemoApplication::getName()
{
	return string("Demo");
}

string DemoApplication::getDescription()
{
	return string("Demo application for new AppStore");
}
