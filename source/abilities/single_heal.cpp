
#include "single_heal.h"
#include "..\civilization.h"
#include <string>
#include "..\unit.h"
#include <sstream>

std::string single_heal::name = "Single Heal";
std::string single_heal::phase = "Battle";

single_heal::single_heal()
{
	amount = 0;
	setDescription();
	reset();
	owner = NULL;
}

single_heal::single_heal(civilization* o)
{
	amount = 3;
	setDescription();
	reset();
	owner = o;
}

single_heal::single_heal(civilization* o, int a)
{
	amount = a;
	setDescription();
	reset();
	owner = o;
}

bool single_heal::checkRequirements()
{
	if(!used)
	 	return true;
	return false;
}

void single_heal::use()
{
	unit u;
	if (checkRequirements())
	{
		owner->bank.iron.spend(1);
		// u.heal(3);
		used = true;
	}
}

std::string single_heal::getName()
{
	return name;
}

void single_heal::setDescription()
{
	std::stringstream sstm;
	sstm << phase << ":\n Heal 1 unit for up to " << amount << " wounds";
	description = sstm.str();
}

std::string single_heal::getPhase()
{
	return phase;
}