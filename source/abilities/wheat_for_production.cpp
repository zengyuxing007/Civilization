
#include "wheat_for_production.h"
#include "..\civilization.h"
#include <string>
#include <sstream>

std::string wheat_for_production::name = "Wheat for Production";
std::string wheat_for_production::phase = "City Management";

wheat_for_production::wheat_for_production()
{
	amount = 0;
	setDescription();
	reset();
	owner = NULL;
}

wheat_for_production::wheat_for_production(civilization* o)
{
	amount = 3;
	setDescription();
	reset();
	owner = o;
}

wheat_for_production::wheat_for_production(civilization* o, int a)
{
	amount = a;
	setDescription();
	reset();
	owner = o;
}

bool wheat_for_production::checkRequirements()
{
	 if (!used && owner->bank.wheat.get() >= 1)
	 	return true;
	 return false;
}

void wheat_for_production::use()
{
	if (checkRequirements())
	{
		owner->bank.wheat.spend(1);
		used = true;
		// city* City = owner->chooseCity;
		// City->production.add(amount);
	}
}

std::string wheat_for_production::getName()
{
	return name;
}

void wheat_for_production::setDescription()
{
	std::stringstream sstm;
	sstm << phase << ":\n Spend 1 Wheat to gain " << amount <<" Production in 1 city";
	description = sstm.str();
}

std::string wheat_for_production::getPhase()
{
	return phase;
}