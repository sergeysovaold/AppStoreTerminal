#include "apps.h"
#include "AppStore.h"

int main()
{
	addAppsToAppStore();
	AppStore store = AppStore::instance();


	std::system("pause");
    return 0;
}

