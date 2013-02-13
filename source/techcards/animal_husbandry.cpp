// Horseback riding tech card

#include "animal_husbandry.h"
#include "..\civilization.h"
#include "..\buildings\barracks.h"
#include "tech_card.h"
#include "resource_ability.h"
#include "wheat_for_production.h"
#include "single_heal.h"
#include <string>

std::string animal_husbandry::name = "Animal Husbandry";
std::string animal_husbandry::description = "";

//Default Constructor
animal_husbandry::animal_husbandry()
{
	owner = NULL;
}

//Constructor
animal_husbandry::animal_husbandry(civilization * c/*, Icon i*/)
{
	owner = c;
}

void animal_husbandry::onLearn()
{
	// Adds the trading post to a players list of available buildings
	owner->buildings.push_back(barracks());

	// Set ability
	ability = wheat_for_production(owner, 3);
	heal_ability = single_heal(owner, 3);

	// Give that ability to the owner
	resource_ability* general = &ability;
	owner->resource_abilities.add(general);

	// Give that ability to the owner
	resource_ability* general = &single_heal;
	owner->resource_abilities.add(general);
}

int animal_husbandry::getLevel()
{
	return 1;
}

std::string animal_husbandry::getName()
{
	return name;
}

std::string animal_husbandry::getDescription()
{
	return description;
}