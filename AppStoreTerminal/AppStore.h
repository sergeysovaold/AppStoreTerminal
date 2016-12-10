#pragma once
#include <vector>
#include "Application.h"

class AppStore
{
public:
	AppStore();
	~AppStore();

	void publish(Application *app);

protected:
	std::vector<Application*> m_List;
};

