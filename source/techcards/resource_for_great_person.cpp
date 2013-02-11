
#include "resource_for_great_person.h"
#include "..\civilization.h"
#include <string>

std::string resource_for_great_person::name = "Resource for Great Person";
std::string resource_for_great_person::phase = "City Management";

resource_for_great_person::resource_for_great_person()
{
	owner = NULL;
	setDescription();
}

resource_for_great_person::resource_for_great_person(civilization* o)
{
	owner = o;
	setDescription();
}

bool resource_for_great_person::checkRequirements()
{
	 if (owner->bank.getTotalResources() >= 3 && gold.get() < max_gold)
	 	return true;
	 return false;
}

void resource_for_great_person::use()
{
	if (checkRequirements())
	{
		owner->addGreatPerson();
	}
}

std::string resource_for_great_person::getName()
{
	return name;
}

void resource_for_great_person::setDescription()
{
	description = "%s:\nOnce per turn spend 3 of any resource and gain a great person", phase;
}

std::string resource_for_great_person::getPhase()
{
	return phase;
}