
#include "spies_for_city_cancel.h"
#include "..\civilization.h"
#include <string>
#include <sstream>

std::string spies_for_city_cancel::name = "Spies for City Cancel";
std::string spies_for_city_cancel::phase = "City Management";

spies_for_city_cancel::spies_for_city_cancel()
{
	setDescription();
	reset();
	owner = NULL;
}

spies_for_city_cancel::spies_for_city_cancel(civilization* o)
{
	setDescription();
	reset();
	owner = o;
}


bool spies_for_city_cancel::checkRequirements()
{
	 if (!used && owner->bank.spies.get() >= 1)
	 	return true;
	 return false;
}

void spies_for_city_cancel::use()
{
	if (checkRequirements())
	{
		// City Cancel Code
		int x = 0;
		x++;
		used = true;
	}
}

std::string spies_for_city_cancel::getName()
{
	return name;
}

void spies_for_city_cancel::setDescription()
{
	std::stringstream sstm;
	sstm << phase << ":\n Spend 1 Spy and cancel another players city action";
	description = sstm.str();
}

std::string spies_for_city_cancel::getPhase()
{
	return phase;
}