//Contains all information pertaining to a civilization
#ifndef CIVILIZATION_H_
#define CIVILIZATION_H_

#include <vector>
#include "building.h"
#include "resource_bank.h"
#include "attributes.h"
#include "tech_tree.h"
#include "city.h"
#include "culture_hand.h"

class civilization
{
	public:
		// Contains the buildings unlocked by the player
		std::vector<building> buildings;

		// Contains the culture cards owned by the player
		culture_hand culture_cards;

		// Contains the cities built by the player
		std::vector<city> cities;

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