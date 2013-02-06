
#include "victory_for_gold.h"
#include "..\civilization.h"
#include <string>

std::string victory_for_gold::name = "Victory for Gold";
std::string victory_for_gold::phase = "Battle";

victory_for_gold::victory_for_gold()
{
	owner = NULL;
}

victory_for_gold::victory_for_gold(civilization* o)
{
	owner = o;
}

bool victory_for_gold::checkRequirements()
{
	 if (true)
	 	return true;
	 return false;
}

void victory_for_gold::use()
{
	if (checkRequirements())
		owner->bank.gold.add(1);
}

std::string victory_for_gold::getName()
{
	return name;
}

std::string victory_for_gold::getPhase()
{
	return phase;
}