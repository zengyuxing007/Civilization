#ifndef WRITING_H
#define WRITING_H

#include <string>
#include "tech_card.h"
#include "..\abilities\spies_for_city_cancel.h"

class writing : public tech_card
{	
	private:
		static std::string name;
		static std::string description;
		
		spies_for_city_cancel ability;

	public:
		// Default constructor. Sets the level and any ability phases
		writing();

		// Constructor associates a civilization and sets the level
		writing(civilization * owner);

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
