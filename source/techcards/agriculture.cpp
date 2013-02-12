// Horseback riding tech card

#include "agriculture.h"
#include "..\civilization.h"
#include "..\buildings\building.h"
#include "tech_card.h"
#include "resource_ability.h"
#include <string>

std::string agriculture::name = "Agriculture";
std::string agriculture::description = "Immediately upgrade your Capital City to a Metropolis";

//Default Constructor
agriculture::agriculture()
{
	owner = NULL;
}

//Constructor
agriculture::agriculture(civilization * c/*, Icon i*/)
{
	owner = c;
}

void agriculture::onLearn()
{
	// Two choices as to how to create a metropolis.
	// 1. By City
	// owner->capital.buildMetropolis();

	// 2. By Owner
	// owner->buildMetropolis();
}

int agriculture::getLevel()
{
	return 1;
}

std::string agriculture::getName()
{
	return name;
}

std::string agriculture::getDescription()
{
	return description;
}