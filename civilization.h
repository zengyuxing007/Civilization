//Contains all information pertaining to a civilization
#ifndef CIVILIZATION_H_
#define CIVILIZATION_H_

#include "resource_bank.h"
#include "attributes.h"
#include "tech_tree.h"

class civilization
{
	public:
		//All a players resources (trade, gold, market, uranium, spies)
		resource_bank bank;

		// All of a players attributes (move_speed, city_limit, battle_bonus, culture_hand)
		attributes stats;

		// A players tech trees
		tech_tree techs;
		//Default constructor.
		civilization();
};
#endif