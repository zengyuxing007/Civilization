
#include "spies_for_city_cancel.h"
#include "..\civilization.h"
#include <string>

std::string spies_for_city_cancel::name = "Spies for City Cancel";
std::string spies_for_city_cancel::phase = "City Management";

spies_for_city_cancel::spies_for_city_cancel()
{
	setDescription();
	owner = NULL;
}

spies_for_city_cancel::spies_for_city_cancel(civilization* o)
{
	setDescription();
	owner = o;
}


bool spies_for_city_cancel::checkRequirements()
{
	 if (owner->bank.spies.get() >= 1)
	 	return true;
	 return false;
}

void spies_for_city_cancel::use()
{
	if (checkRequirements())
		// City Cancel Code
		int x = 0;
}

std::string spies_for_city_cancel::getName()
{
	return name;
}

void spies_for_city_cancel::setDescription()
{
	description = "%s:\n Spend 1 spy and cancel another players city action", phase;
}

std::string spies_for_city_cancel::getPhase()
{
	return phase;
}