
#include "incense_for_culture.h"
#include "..\civilization.h"
#include <string>

std::string incense_for_culture::name = "Incense for Culture";
std::string incense_for_culture::phase = "City Management";

incense_for_culture::incense_for_culture()
{
	amount = 0;
	owner = NULL;
}

incense_for_culture::incense_for_culture(civilization* o)
{
	amount = 3;
	owner = o;
}

incense_for_culture::incense_for_culture(civilization* o, int a)
{
	amount = a;
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
		owner->bank.culture.add(amount);
}

std::string incense_for_culture::getName()
{
	return name;
}

std::string incense_for_culture::getPhase()
{
	return phase;
}