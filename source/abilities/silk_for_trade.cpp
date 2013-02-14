
#include "silk_for_trade.h"
#include "..\civilization.h"
#include <string>
#include <sstream>

std::string silk_for_trade::name = "Silk for Trade";
std::string silk_for_trade::phase = "Trade";

silk_for_trade::silk_for_trade()
{
	setDescription();
	reset();
	owner = NULL;
}

silk_for_trade::silk_for_trade(civilization* o)
{
	setDescription();
	reset();
	owner = o;
}


bool silk_for_trade::checkRequirements()
{
	 if (!used && owner->bank.silk.get() >= 1)
	 	return true;
	 return false;
}

void silk_for_trade::use()
{
	if (checkRequirements())
	{
		owner->bank.silk.spend(1);
		owner->bank.trade.add(9);
		civilization p;
		p.bank.trade.add(6);
		used = true;
	}
}

std::string silk_for_trade::getName()
{
	return name;
}

void silk_for_trade::setDescription()
{
	std::stringstream sstm;
	sstm << phase << ":\n Spend 1 Silk to gain 9 Trade for yourself and 6 Trade to donate to another player";
	description = sstm.str();
}

std::string silk_for_trade::getPhase()
{
	return phase;
}