#ifndef ANIMAL_HUSBANDRY_H
#define ANIMAL_HUSBANDRY_H

#include <string>
#include "tech_card.h"
#include "..\abilities\wheat_for_production.h"
#include "..\abilities\single_heal.h"

class animal_husbandry : public tech_card
{	
	private:
		static std::string name;
		static std::string description;
		
		wheat_for_production ability;
		single_heal heal_ability;

	public:
		// Default constructor. Sets the level and any ability phases
		animal_husbandry();

		// Constructor associates a civilization and sets the level
		animal_husbandry(civilization * owner);

		// Returns the level of the tech
		virtual int getLevel();

		// Runs when the tech is added to the tree
		virtual void onLearn();

		// Returns the cards name
		virtual std::string getName();

		// Returns the cards description
		virtual std::string getDescription();
};
#endif
