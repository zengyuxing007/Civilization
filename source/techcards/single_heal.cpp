
#include "single_heal.h"
#include "..\civilization.h"
#include <string>
#include "..\unit.h"

std::string single_heal::name = "Single Heal";
std::string single_heal::phase = "Battle";

single_heal::single_heal()
{
	amount = 0;
	setDescription();
	owner = NULL;
}

single_heal::single_heal(civilization* o)
{
	amount = 3;
	setDescription();
	owner = o;
}

single_heal::single_heal(civilization* o, int a)
{
	amount = a;
	setDescription();
	owner = o;
}

bool single_heal::checkRequirements()
{
 	return true;
}

void single_heal::use()
{
	unit u;
	if (checkRequirements())
	{
		owner->bank.iron.spend(1);
		u.heal(3);
	}
}

std::string single_heal::getName()
{
	return name;
}

void single_heal::setDescription()
{
	description = "%s:\n Spend 1 Iron to gain %d Strength on the next unit you play", phase, amount;
}

std::string single_heal::getPhase()
{
	return phase;
}