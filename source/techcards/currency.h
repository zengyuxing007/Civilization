#ifndef CURRENCY_H
#define CURRENCY_H

#include <string>
#include "tech_card.h"
#include "..\abilities\incense_for_culture.h"

class currency : public tech_card
{	
	private:
		static std::string name;
		static std::string description;
		
		incense_for_culture ability;

	public:
		// Default constructor. Sets the level and any ability phases
		currency();

		// Constructor associates a civilization and sets the level
		currency(civilization * owner);

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
