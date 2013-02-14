
#include "victory_for_gold.h"
#include "..\civilization.h"
#include <string>
#include <sstream>

std::string victory_for_gold::name = "Victory for Gold";
std::string victory_for_gold::phase = "Battle";

victory_for_gold::victory_for_gold()
{
	owner = NULL;
	setDescription();
	reset();
}

victory_for_gold::victory_for_gold(civilization* o)
{
	owner = o;
	setDescription();
	reset();
}

bool victory_for_gold::checkRequirements()
{
	 if (!used && gold.get() < max_gold)
	 	return true;
	 return false;
}

void victory_for_gold::use()
{
	if (checkRequirements())
	{
		owner->bank.spendable_gold.add(1);
		gold.add(1);
		used = true;
	}
}

std::string victory_for_gold::getName()
{
	return name;
}

void victory_for_gold::setDescription()
{
	std::stringstream sstm;
	sstm << phase << ":\n After a victory against an enemy figure, city or village gain 1 Gold Coin (max 4)";
	description = sstm.str();
}

std::string victory_for_gold::getPhase()
{
	return phase;
}