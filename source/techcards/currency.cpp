// Horseback riding tech card

#include "currency.h"
#include "..\civilization.h"
#include "..\buildings\market.h"
#include "tech_card.h"
#include "..\abilities\resource_ability.h"
#include "..\abilities\incense_for_culture.h"
#include <string>

std::string currency::name = "Currency";
std::string currency::description = "Gain Access to Market";

//Default Constructor
currency::currency()
{
	owner = NULL;
}

//Constructor
currency::currency(civilization * c/*, Icon i*/)
{
	owner = c;
}

void currency::onLearn()
{
	// Adds the trading post to a players list of available buildings
	owner->buildings.push_back(market());

	// Set ability
	ability = incense_for_culture(owner, 3);

	// Give that ability to the owner
	resource_ability* general = &ability;
	owner->resource_abilities.add(general);
}

int currency::getLevel()
{
	return 1;
}

std::string currency::getName()
{
	return name;
}

std::string currency::getDescription()
{
	return description;
}