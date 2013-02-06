#ifndef TECH_CARD_H
#define TECH_CARD_H

class civilization;

#include <string>

// Base template for tech cards
class tech_card
{
	protected:
		civilization* owner;

		static std::string name;

		// Description of what the skill does.
		static std::string description;

		// Background background(); //Background image. Same for all techs
		// Icon icon(); //Icon that appears in the top corner

	public:
		// Default constructor. Sets the level and any ability phases
		tech_card();

		// Constructor associates a civilization and sets the level
		tech_card(civilization * owner);

		// Returns the level of the tech
		virtual int getLevel();

		// Runs when the tech is added to the tree
		virtual void onLearn();

		// Returns the cards name
		virtual std::string getName();

		// Returns the cards description
		virtual std::string getDescription();

		// Sets the owner of the tech
		void setOwner(civilization* owner);
};
#endif