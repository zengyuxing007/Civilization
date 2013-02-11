
#include "resource_for_gold.h"
#include "..\civilization.h"
#include <string>

std::string resource_for_gold::name = "Resource for Gold";
std::string resource_for_gold::phase = "City Management";

resource_for_gold::resource_for_gold()
{
	owner = NULL;
	setDescription();
}

resource_for_gold::resource_for_gold(civilization* o)
{
	owner = o;
	setDescription();
}

bool resource_for_gold::checkRequirements()
{
	 if (owner->bank.getTotalResources() >= 2 && gold.get() < max_gold)
	 	return true;
	 return false;
}

void resource_for_gold::use()
{
	if (checkRequirements())
	{
		owner->bank.spendable_gold.add(1);
		gold.add(1);
	}
}

std::string resource_for_gold::getName()
{
	return name;
}

void resource_for_gold::setDescription()
{
	description = "%s:\nOnce per turn spend 2 of any resource and place a Gold Coin on this ability", phase;
}

std::string resource_for_gold::getPhase()
{
	return phase;
}