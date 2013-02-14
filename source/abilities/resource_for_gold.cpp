
#include "resource_for_gold.h"
#include "..\civilization.h"
#include <string>
#include <sstream>

std::string resource_for_gold::name = "Resource for Gold";
std::string resource_for_gold::phase = "City Management";

resource_for_gold::resource_for_gold()
{
	owner = NULL;
	setDescription();
	reset();
}

resource_for_gold::resource_for_gold(civilization* o)
{
	owner = o;
	setDescription();
	reset();
}

bool resource_for_gold::checkRequirements()
{
	 if (!used && owner->bank.getTotalResources() >= 2 && gold.get() < max_gold)
	 	return true;
	 return false;
}

void resource_for_gold::use()
{
	if (checkRequirements())
	{
		owner->bank.spendable_gold.add(1);
		gold.add(1);
		used = true;
	}
}

std::string resource_for_gold::getName()
{
	return name;
}

void resource_for_gold::setDescription()
{
	std::stringstream sstm;
	sstm << phase << ":\n Spend 2 of any resource and place 1 Gold Coin on this card";
	description = sstm.str();
}

std::string resource_for_gold::getPhase()
{
	return phase;
}