
#include "silk_for_trade.h"
#include "..\civilization.h"
#include <string>

std::string silk_for_trade::name = "Silk for Trade";
std::string silk_for_trade::phase = "Trade";

silk_for_trade::silk_for_trade()
{
	amount = 0;
	owner = NULL;
}

silk_for_trade::silk_for_trade(civilization* o)
{
	amount = 3;
	owner = o;
}

silk_for_trade::silk_for_trade(civilization* o, int a)
{
	amount = a;
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
		owner->bank.trade.add(amount);
}

std::string silk_for_trade::getName()
{
	return name;
}

std::string silk_for_trade::getPhase()
{
	return phase;
}