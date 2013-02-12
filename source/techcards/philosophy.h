#ifndef PHILOSOPHY_H
#define PHILOSOPHY_H

#include <string>
#include "tech_card.h"
#include "resource_for_great_person.h"

class philosophy : public tech_card
{	
	private:
		static std::string name;
		static std::string description;
		
		resource_for_great_person ability;

	public:
		// Default constructor. Sets the level and any ability phases
		philosophy();

		// Constructor associates a civilization and sets the level
		philosophy(civilization * owner);

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