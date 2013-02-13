
#include "wheat_for_culture.h"
#include "..\civilization.h"
#include <string>

std::string wheat_for_culture::name = "Wheat for Culture";
std::string wheat_for_culture::phase = "City Management";

wheat_for_culture::wheat_for_culture()
{
	amount = 0;
	setDescription();
	owner = NULL;
}

wheat_for_culture::wheat_for_culture(civilization* o)
{
	amount = 3;
	setDescription();
	owner = o;
}

wheat_for_culture::wheat_for_culture(civilization* o, int a)
{
	amount = a;
	setDescription();
	owner = o;
}

bool wheat_for_culture::checkRequirements()
{
	 if (owner->bank.wheat.get() >= 1)
	 	return true;
	 return false;
}

void wheat_for_culture::use()
{
	if (checkRequirements())
	{
		owner-bank.wheat.spend(1);
		// city* City = owner->chooseCity;
		// City->production.add(amount);
	}
}

std::string wheat_for_culture::getName()
{
	return name;
}

void wheat_for_culture::setDescription()
{
	description = "%s:\n Spend 1 Wheat to gain %d Production in 1 city", phase, amount;
}

std::string wheat_for_culture::getPhase()
{
	return phase;
}