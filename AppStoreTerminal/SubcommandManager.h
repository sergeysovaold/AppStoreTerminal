#pragma once
#include "CommandManager.h"
#include "Command.h"

class SubcommandManager : public CommandManager
{
public:
	SubcommandManager();
	SubcommandManager(const Command* parent);
	SubcommandManager(const string name);
	virtual ~SubcommandManager();

	string getCommandsHelp(const string) const;

	inline const string getParentName() const;
	void setParentName(const string);

private:
	string m_sParentName;
};

