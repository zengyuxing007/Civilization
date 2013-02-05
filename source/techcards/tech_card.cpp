// Types of tickets
//Base template for tech cards

#include "tech_card.h"
#include <string>

std::string tech_card::name = "Tech Card";
std::string tech_card::description = "Basic tech card";

//Default Constructor
tech_card::tech_card()
{
	owner = NULL;
}

//Constructor
tech_card::tech_card(civilization * c/*, Icon i*/)
{
	owner = c;
}

int tech_card::getLevel()
{
	return 1;
}

//Function to play on onLearn
void tech_card::onLearn()
{
	//p.tech_tree.add(level);
}

void tech_card::setOwner(civilization* o)
{
	owner = o;
}

std::string tech_card::getName()
{
	return name;
}

std::string tech_card::getDescription()
{
	return description;
}