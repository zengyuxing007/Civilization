#ifndef METALWORKING_H
#define METALWORKING_H

#include <string>
#include "tech_card.h"
#include "..\abilities\iron_for_strength.h"

class metalworking : public tech_card
{	
	private:
		static std::string name;
		static std::string description;
		
		iron_for_strength ability;

	public:
		// Default constructor. Sets the level and any ability phases
		metalworking();

		// Constructor associates a civilization and sets the level
		metalworking(civilization * owner);

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
