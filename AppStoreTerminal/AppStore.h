#pragma once
#include <vector>
#include "Application.h"

class AppStore
{
public:
	~AppStore();

	void publish(Application *app);
	int nextId();

	static AppStore& instance();

protected:
	std::vector<Application*> m_List;
	int m_iLatestId;

private:
	AppStore();
};
