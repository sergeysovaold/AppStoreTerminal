#pragma once
#include "Application.h"
class DemoApplication : public Application
{
public:
	DemoApplication(int id);
	virtual ~DemoApplication();

	virtual string getName();
	virtual string getDescription();
};

