#include "Application.h"

class ExampleApp : public Application {
public:
	ExampleApp()
	{
	};

	virtual ~ExampleApp()
	{
	};

	virtual string getName()
	{
		return string("Example");
	};

	virtual string getDescription()
	{
		return string("Application created for stub only.");
	};

	virtual void onInstall()
	{
		printLog(string("Example app installed!"));
	};

	virtual void onUninstall()
	{
		printLog(string("Example app uninstalled!"));
	}
};

int main()
{
	Application *example = new ExampleApp();
	example->onInstall();
	example->onUninstall();


	std::system("pause");
    return 0;
}

