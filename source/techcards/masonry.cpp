// Horseback riding tech card

#include "masonry.h"
#include "..\civilization.h"
#include "..\buildings\building.h"
#include "tech_card.h"
#include "resource_ability.h"
#include <string>

std::string masonry::name = "Masonry";
std::string masonry::description = "Increases Stacking Limit to 3\nAllows you to build walls";

//Default Constructor
masonry::masonry()
{
	owner = NULL;
}

//Constructor
masonry::masonry(civilization * c/*, Icon i*/)
{
	owner = c;
}

void masonry::onLearn()
{
	// Adds the trading post to a players list of available buildings
	owner->buildings.push_back(building());

	// Increases culture hand size
	owner->stats.stacking_limit.set(3);
}

int masonry::getLevel()
{
	return 1;
}

std::string masonry::getName()
{
	return name;
}

std::string masonry::getDescription()
{
	return description;
}