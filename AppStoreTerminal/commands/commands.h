#pragma once

#include "CommandManager.h"
#include "AppStore.h"

void installCommands(CommandManager *manager);
void installApplicationsCommands(const AppList, CommandManager*);
