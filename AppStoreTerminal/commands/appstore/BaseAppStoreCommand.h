#pragma once
#include "../../Command.h"

class BaseAppStoreCommand : public Command
{
public:

	virtual string getDescription() const = 0;
};
