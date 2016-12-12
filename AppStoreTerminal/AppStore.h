#pragma once
#include <vector>
#include "Application.h"

typedef std::vector<Application *> AppList;

class AppStore final
{
public:
	AppStore(AppStore const &) = delete;
	void operator=(AppStore const&) = delete;

	void publish(Application *app);
	int nextId();
	AppList getAllApplications() const;

	static AppStore* instance();

protected:
	std::vector<Application*> m_List;
	int m_iLatestId;

private:
	AppStore();
	~AppStore();
};
