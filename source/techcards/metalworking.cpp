// Horseback riding tech card

#include "metalworking.h"
#include "..\civilization.h"
#include "..\buildings\barracks.h"
#include "tech_card.h"
#include "resource_ability.h"
#include "iron_for_strength.h"
#include <string>

std::string metalworking::name = "Metalworking";
std::string metalworking::description = "Gain access to Barracks";

//Default Constructor
metalworking::metalworking()
{
	owner = NULL;
}

//Constructor
metalworking::metalworking(civilization * c/*, Icon i*/)
{
	owner = c;
}

void metalworking::onLearn()
{
	// Adds the trading post to a players list of available buildings
	owner->buildings.push_back(barracks());

	// Set ability
	ability = iron_for_strength(owner, 3);

	// Give that ability to the owner
	resource_ability* general = &ability;
	owner->resource_abilities.add(general);
}

int metalworking::getLevel()
{
	return 1;
}

std::string metalworking::getName()
{
	return name;
}

std::string metalworking::getDescription()
{
	return description;
}