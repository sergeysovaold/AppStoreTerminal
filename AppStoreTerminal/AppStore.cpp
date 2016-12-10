#include "AppStore.h"

AppStore::AppStore()
{
	m_List = {};
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
