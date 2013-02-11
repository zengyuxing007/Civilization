// Resource Ability parent class

#include "..\civilization.h"
#include <string>
#include "resource_ability.h"

std::string resource_ability::name = "Resource Ability";
std::string resource_ability::phase = "Any";

resource_ability::resource_ability()
{
	setDescription();
}

resource_ability::resource_ability(civilization* o)
{
	owner = o;
	setDescription();
}

bool resource_ability::checkRequirements()
{
	return false;
}

void resource_ability::use()
{
	
}

std::string resource_ability::getName()
{
	return name;
}

std::string resource_ability::getPhase()
{
	return phase;
}

void resource_ability::setDescription()
{
	description = "No Ability";
}

std::string resource_ability::getDescription()
{
	return description;
}