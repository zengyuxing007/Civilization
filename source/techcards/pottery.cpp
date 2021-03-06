// Horseback riding tech card

#include "pottery.h"
#include "..\civilization.h"
#include "..\buildings\granary.h"
#include "tech_card.h"
#include "..\abilities\resource_ability.h"
#include "..\abilities\resource_for_gold.h"
#include <string>

std::string pottery::name = "Pottery";
std::string pottery::description = "Gain access to Granary";

//Default Constructor
pottery::pottery()
{
	owner = NULL;
}

//Constructor
pottery::pottery(civilization * c/*, Icon i*/)
{
	owner = c;
}

void pottery::onLearn()
{
	// Adds the trading post to a players list of available buildings
	owner->buildings.push_back(granary());

	// Increases culture hand size
	owner->stats.culture_hand.add(1);

	// Set ability
	ability = resource_for_gold(owner);

	// Give that ability to the owner
	resource_ability* general = &ability;
	owner->resource_abilities.add(general);
}

int pottery::getLevel()
{
	return 1;
}

std::string pottery::getName()
{
	return name;
}

std::string pottery::getDescription()
{
	return description;
}