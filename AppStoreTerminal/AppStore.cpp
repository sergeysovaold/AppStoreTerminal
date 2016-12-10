#include "AppStore.h"

AppStore::AppStore()
{
	m_List = {};
	m_iLatestId = 0;
}

AppStore::~AppStore()
{
	for (Application *app : m_List) {
		app->onDestroy();
		delete app;
	}
	m_List.clear();
}

void AppStore::publish(Application * app)
{
	m_List.push_back(app);
}

AppStore* AppStore::instance()
{
	static AppStore *inst = new AppStore();
	return inst;
}

int AppStore::nextId()
{
	return ++m_iLatestId;
}

AppList AppStore::getAllApplications() const
{
	return m_List;
}
