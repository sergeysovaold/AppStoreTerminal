#pragma once
#include "CommandManager.h"
#include "Command.h"

class SubcommandManager : public CommandManager
{
public:
	SubcommandManager(const Command* parent);
	virtual ~SubcommandManager();

	string getCommandsHelp() const;

private:
	const Command* m_pParent;
};

