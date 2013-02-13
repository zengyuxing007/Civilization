// Horseback riding tech card

#include "writing.h"
#include "..\civilization.h"
#include "..\buildings\library.h"
#include "tech_card.h"
#include "resource_ability.h"
#include "spies_for_city_cancel.h"
#include <string>

std::string writing::name = "Writing";
std::string writing::description = "Gain Access to Library";

//Default Constructor
writing::writing()
{
	owner = NULL;
}

//Constructor
writing::writing(civilization * c/*, Icon i*/)
{
	owner = c;
}

void writing::onLearn()
{
	// Adds the trading post to a players list of available buildings
	owner->buildings.push_back(library());

	// Set ability
	ability = spies_for_city_cancel(owner);

	// Give that ability to the owner
	resource_ability* general = &ability;
	owner->resource_abilities.add(general);
}

int writing::getLevel()
{
	return 1;
}

std::string writing::getName()
{
	return name;
}

std::string writing::getDescription()
{
	return description;
}