// Horseback riding tech card

#include "horseback_riding.h"
#include "..\civilization.h"
#include "tech_card.h"
#include "..\abilities\resource_ability.h"
#include "..\abilities\silk_for_trade.h"
#include <string>

std::string horseback_riding::name = "Horseback Riding";
std::string horseback_riding::description = "Increases movement speed to 3";

//Default Constructor
horseback_riding::horseback_riding()
{
	owner = NULL;
}

//Constructor
horseback_riding::horseback_riding(civilization * c/*, Icon i*/)
{
	owner = c;
}

void horseback_riding::onLearn()
{
	// Increase movement speed if it is lower than 3
	owner->stats.move_speed.set(3);

	// Set ability
	ability = silk_for_trade(owner);

	// Give that ability to the owner
	resource_ability* general = &ability;
	owner->resource_abilities.add(general);
}

int horseback_riding::getLevel()
{
	return 1;
}

std::string horseback_riding::getName()
{
	return name;
}

std::string horseback_riding::getDescription()
{
	return description;
}