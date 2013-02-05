
#include "silk_for_trade.h"
#include "..\civilization.h"
#include <string>

std::string silk_for_trade::name = "Resource Ability";

silk_for_trade::silk_for_trade()
{
	owner = NULL;
}

silk_for_trade::silk_for_trade(civilization* o)
{
	owner = o;
}

bool silk_for_trade::checkRequirements()
{
	 if (owner->bank.silk.get() >= 1)
	 	return true;
	 return false;
}

void silk_for_trade::use()
{
	if (checkRequirements())
		owner->bank.trade.add(9);
}

std::string silk_for_trade::getName()
{
	return name;
}