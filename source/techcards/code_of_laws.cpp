// Horseback riding tech card

#include "code_of_laws.h"
#include "..\civilization.h"
#include "..\buildings\trading_post.h"
#include "tech_card.h"
#include "resource_ability.h"
#include "victory_for_gold.h"
#include <string>

std::string code_of_laws::name = "Code of Laws";
std::string code_of_laws::description = "Learn Republic\nGain Access to Trading Post";

//Default Constructor
code_of_laws::code_of_laws()
{
	owner = NULL;
}

//Constructor
code_of_laws::code_of_laws(civilization * c/*, Icon i*/)
{
	owner = c;
}

void code_of_laws::onLearn()
{
	// Adds the trading post to a players list of available buildings
	owner->buildings.push_back(trading_post());

	// Set ability
	ability = victory_for_gold(owner);

	// Give that ability to the owner
	resource_ability* general = &ability;
	owner->resource_abilities.add(general);
}

int code_of_laws::getLevel()
{
	return 1;
}

std::string code_of_laws::getName()
{
	return name;
}

std::string code_of_laws::getDescription()
{
	return description;
}