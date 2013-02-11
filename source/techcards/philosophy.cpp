// Horseback riding tech card

#include "philosophy.h"
#include "..\civilization.h"
#include "..\buildings\temple.h"
#include "tech_card.h"
#include "resource_ability.h"
#include "resource_for_great_person.h"
#include <string>

std::string philosophy::name = "Philosophy";
std::string philosophy::description = "City Management:\nTrade in any 2 resources for 1 Gold Coin";

//Default Constructor
philosophy::philosophy()
{
	owner = NULL;
}

//Constructor
philosophy::philosophy(civilization * c/*, Icon i*/)
{
	owner = c;
}

void philosophy::onLearn()
{
	// Adds the trading post to a players list of available buildings
	owner->buildings.push_back(temple());

	// Set ability
	ability = resource_for_great_person(owner);

	// Give that ability to the owner
	resource_ability* general = &ability;
	owner->resource_abilities.add(general);
}

int philosophy::getLevel()
{
	return 1;
}

std::string philosophy::getName()
{		
	return name;
}

std::string philosophy::getDescription()
{
	return description;
}