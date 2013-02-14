// Horseback riding tech card

#include "navigation.h"
#include "..\civilization.h"
#include "..\buildings\building.h"
#include "tech_card.h"
#include <string>

std::string navigation::name = "Navigation";
std::string navigation::description = "Allows you to move across water so long as you don't end your turn on it.";

//Default Constructor
navigation::navigation()
{
	owner = NULL;
}

//Constructor
navigation::navigation(civilization * c/*, Icon i*/)
{
	owner = c;
}

void navigation::onLearn()
{
	// Adds the trading post to a players list of available buildings
	owner->buildings.push_back(building());

	// Increases culture hand size
	owner->stats.swimming.set(true);
}

int navigation::getLevel()
{
	return 1;
}

std::string navigation::getName()
{
	return name;
}

std::string navigation::getDescription()
{
	return description;
}