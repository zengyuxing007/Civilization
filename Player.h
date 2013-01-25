//Contains all information pertaining to a player
#ifndef PLAYER_H_
#define PLAYER_H_

#include "resource_bank.h"
#include "attributes.h"
#include "tech_tree.h"

class Player
{
	public:
		//All a players resources (trade, gold, market, uranium, spies)
		resource_bank bank;

		// All of a players attributes (move_speed, city_limit, battle_bonus, culture_hand)
		attributes atts;

		// A players tech trees
		tech_tree techs;
		//Default constructor.
		Player();


};
#endif