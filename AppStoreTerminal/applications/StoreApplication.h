#pragma once
#include "Application.h"


class StoreApplication : public Application
{
public:
	StoreApplication(int id);
	virtual ~StoreApplication();

	string getName() const override;
	string getDescription() const override;
};

