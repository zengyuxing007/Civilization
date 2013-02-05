// Resource Ability parent class

#include "..\civilization.h"
#include <string>
#include "resource_ability.h"

std::string resource_ability::name = "Resource Ability";

resource_ability::resource_ability()
{

}

resource_ability::resource_ability(civilization* o)
{
	owner = o;
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