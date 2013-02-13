#ifndef POTTERY_H
#define POTTERY_H

#include <string>
#include "tech_card.h"
#include "..\abilities\resource_for_gold.h"

class pottery : public tech_card
{	
	private:
		static std::string name;
		static std::string description;
		
		resource_for_gold ability;

	public:
		// Default constructor. Sets the level and any ability phases
		pottery();

		// Constructor associates a civilization and sets the level
		pottery(civilization * owner);

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
