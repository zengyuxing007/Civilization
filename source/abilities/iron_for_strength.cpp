
#include "iron_for_strength.h"
#include "..\civilization.h"
#include <string>
#include "..\unit.h"
#include <sstream>

std::string iron_for_strength::name = "Iron for Strength";
std::string iron_for_strength::phase = "Battle";

iron_for_strength::iron_for_strength()
{
	amount = 0;
	setDescription();
	reset();
	owner = NULL;
}

iron_for_strength::iron_for_strength(civilization* o)
{
	amount = 3;
	setDescription();
	reset();
	owner = o;
}

iron_for_strength::iron_for_strength(civilization* o, int a)
{
	amount = a;
	setDescription();
	reset();
	owner = o;
}

bool iron_for_strength::checkRequirements()
{
	 if (!used && owner->bank.iron.get() >= 1)
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
		used = true;
	}
}

std::string iron_for_strength::getName()
{
	return name;
}

void iron_for_strength::setDescription()
{
	std::stringstream sstm;
	sstm << phase << ":\n Spend 1 Iron to add " << amount << " attack to a unit when he is placed down for 1 battle";
	description = sstm.str();
}

std::string iron_for_strength::getPhase()
{
	return phase;
}