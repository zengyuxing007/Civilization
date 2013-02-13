
#include "incense_for_culture.h"
#include "..\civilization.h"
#include <string>

std::string incense_for_culture::name = "Incense for Culture";
std::string incense_for_culture::phase = "City Management";

incense_for_culture::incense_for_culture()
{
	amount = 0;
	setDescription();
	owner = NULL;
}

incense_for_culture::incense_for_culture(civilization* o)
{
	amount = 3;
	setDescription();
	owner = o;
}

incense_for_culture::incense_for_culture(civilization* o, int a)
{
	amount = a;
	setDescription();
	owner = o;
}

bool incense_for_culture::checkRequirements()
{
	 if (owner->bank.incense.get() >= 1)
	 	return true;
	 return false;
}

void incense_for_culture::use()
{
	if (checkRequirements())
	{
		owner->bank.incense.spend(1);
		owner->bank.culture.add(amount);
	}
}

std::string incense_for_culture::getName()
{
	return name;
}

void incense_for_culture::setDescription()
{
	description = "%s:\n Spend 1 Incense to gain %d Culture", phase, amount;
}

std::string incense_for_culture::getPhase()
{
	return phase;
}