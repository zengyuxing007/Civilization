
#include "iron_for_strength.h"
#include "..\civilization.h"
#include <string>
#include "..\unit.h"

std::string iron_for_strength::name = "Iron for Strength";
std::string iron_for_strength::phase = "Battle";

iron_for_strength::iron_for_strength()
{
	amount = 0;
	setDescription();
	owner = NULL;
}

iron_for_strength::iron_for_strength(civilization* o)
{
	amount = 3;
	setDescription();
	owner = o;
}

iron_for_strength::iron_for_strength(civilization* o, int a)
{
	amount = a;
	setDescription();
	owner = o;
}

bool iron_for_strength::checkRequirements()
{
	 if (owner->bank.iron.get() >= 1)
	 	return true;
	 return false;
}

void iron_for_strength::use()
{
	unit u;
	if (checkRequirements())
	{
		owner->bank.iron.spend(1);
		u.addTemp(3);
	}
}

std::string iron_for_strength::getName()
{
	return name;
}

void iron_for_strength::setDescription()
{
	description = "%s:\n Spend 1 Iron to gain %d Strength on the next unit you play", phase, amount;
}

std::string iron_for_strength::getPhase()
{
	return phase;
}