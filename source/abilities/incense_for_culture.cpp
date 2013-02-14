
#include "incense_for_culture.h"
#include "..\civilization.h"
#include <string>
#include <sstream>

std::string incense_for_culture::name = "Incense for Culture";
std::string incense_for_culture::phase = "City Management";

incense_for_culture::incense_for_culture()
{
	amount = 0;
	setDescription();
	reset();
	owner = NULL;
}

incense_for_culture::incense_for_culture(civilization* o)
{
	amount = 3;
	setDescription();
	reset();
	owner = o;
}

incense_for_culture::incense_for_culture(civilization* o, int a)
{
	amount = a;
	setDescription();
	reset();
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
	if (!used && checkRequirements())
	{
		used = true;
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
	std::stringstream sstm;
	sstm << phase << ":\n Spend 1 Incense to gain " << amount <<" Culture";
	description = sstm.str();
}

std::string incense_for_culture::getPhase()
{
	return phase;
}