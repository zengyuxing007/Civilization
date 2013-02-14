
#include "resource_for_great_person.h"
#include "..\civilization.h"
#include <string>
#include <sstream>

std::string resource_for_great_person::name = "Resource for Great Person";
std::string resource_for_great_person::phase = "City Management";

resource_for_great_person::resource_for_great_person()
{
	owner = NULL;
	setDescription();
	reset();
}

resource_for_great_person::resource_for_great_person(civilization* o)
{
	owner = o;
	setDescription();
	reset();
}

bool resource_for_great_person::checkRequirements()
{
	 if (!used && owner->bank.getTotalResources() >= 3 && gold.get() < max_gold)
	 	return true;
	 return false;
}

void resource_for_great_person::use()
{
	if (checkRequirements())
	{
		owner->addGreatPerson();
		used = true;
	}
}

std::string resource_for_great_person::getName()
{
	return name;
}

void resource_for_great_person::setDescription()
{
	std::stringstream sstm;
	sstm << phase << ":\n Spend 3 of any resource and get a Great Person";
	description = sstm.str();
}

std::string resource_for_great_person::getPhase()
{
	return phase;
}