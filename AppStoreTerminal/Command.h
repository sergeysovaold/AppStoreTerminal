#pragma once
#include <string>
#include <vector>

extern class CommandManager;

using std::string;
using std::vector;

class Command
{
public:
	Command();
	virtual ~Command();

	virtual void onRun(vector<string>);
	virtual string getName() const = 0;
	virtual string getHelp() const;
	virtual string getAlias() const;
	virtual vector<string> getAliases() const;

protected:
	// Get current command manager object
	const CommandManager* getManager() const;

private:
	void setCommandManager(const CommandManager *);
	const CommandManager* m_pManager;
	friend class CommandManager;
};

