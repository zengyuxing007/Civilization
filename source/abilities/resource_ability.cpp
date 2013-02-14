// Resource Ability parent class

#include "..\civilization.h"
#include <string>
#include "resource_ability.h"
#include <sstream>

std::string resource_ability::name = "Resource Ability";
std::string resource_ability::phase = "Any";

resource_ability::resource_ability()
{
	reset();
	setDescription();
}

resource_ability::resource_ability(civilization* o)
{
	owner = o;
	reset();
	setDescription();
}

bool resource_ability::checkRequirements()
{
	return false;
}

void resource_ability::use()
{
	used = true;
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
	std::stringstream sstm;
	sstm << "No Ability";
	description = sstm.str();
}

void resource_ability::reset()
{
	used = false;
}
