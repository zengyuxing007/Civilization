
#include "silk_for_trade.h"
#include "..\civilization.h"
#include <string>

std::string silk_for_trade::name = "Silk for Trade";
std::string silk_for_trade::phase = "Trade";

silk_for_trade::silk_for_trade()
{
	setDescription();
	owner = NULL;
}

silk_for_trade::silk_for_trade(civilization* o)
{
	setDescription();
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
	civilization p;
	p.bank.trade.add(6);
}

std::string silk_for_trade::getName()
{
	return name;
}

void silk_for_trade::setDescription()
{
	description = "Trade:\n Spend 1 Silk to gain 9 trade for yourself and 6 trade to donate to another player of your choice";
}

std::string silk_for_trade::getPhase()
{
	return phase;
}