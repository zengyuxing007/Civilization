
#include "victory_for_gold.h"
#include "..\civilization.h"
#include <string>

std::string victory_for_gold::name = "Victory for Gold";
std::string victory_for_gold::phase = "Battle";

victory_for_gold::victory_for_gold()
{
	owner = NULL;
	setDescription();
}

victory_for_gold::victory_for_gold(civilization* o)
{
	owner = o;
	setDescription();
}

bool victory_for_gold::checkRequirements()
{
	 if (gold.get() <= 3)
	 	return true;
	 return false;
}

void victory_for_gold::use()
{
	if (checkRequirements())
	{
		owner->bank.spendable_gold.add(1);
		gold.add(1);
	}
}

std::string victory_for_gold::getName()
{
	return name;
}

void victory_for_gold::setDescription()
{
	description = "%s:\nOnce per turn after winning a battle, gain one Gold Coin token and place it on this ability.", phase;
}

std::string victory_for_gold::getPhase()
{
	return phase;
}