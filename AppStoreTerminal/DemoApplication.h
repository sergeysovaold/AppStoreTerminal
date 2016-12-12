#pragma once
#include "Application.h"
class DemoApplication : public Application
{
public:
	DemoApplication(int id);
	virtual ~DemoApplication();

	string getName() const override;
	string getDescription() const override;
};

