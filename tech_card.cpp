// Types of tickets
#include "tech_card.h"
//Base template for tech cards
//Default Constructor
tech_card::tech_card()
{
	level = 0;
}

//Constructor
tech_card::tech_card(civilization * c/*, Icon i*/)
{
	level = 0;
	owner = c;
}

int tech_card::getLevel()
{
	return level;
}
//Function to play on onLearn
void tech_card::onLearn()
{
	//p.tech_tree.add(level);
}






