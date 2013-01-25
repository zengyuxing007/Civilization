#ifndef TECH_CARD_H
#define TECH_CARD_H

class Player;

#include <string>

// Base template for tech cards
class tech_card
{
	protected:
		int level;
		// Background background(); //Background image. Same for all techs
		// Icon icon(); //Icon that appears in the top corner
		// phase in which ability can be used
		// std::string ability_phase;
	public:
		// Default constructor. Sets the level and any ability phases
		tech_card();
		// Constructor associates a player and sets the level
		tech_card(Player & owner);

		// Returns the level of the tech
		int getLevel();

		// Runs when the tech is added to the tree
		void onLearn();
};
#endif