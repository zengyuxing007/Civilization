#ifndef HORSEBACK_RIDING_H
#define HORSEBACK_RIDING_H

#include <string>
#include "tech_card.h"
#include "..\abilities\silk_for_trade.h"

class horseback_riding : public tech_card
{	
	private:
		static std::string name;
		static std::string description;
		
		silk_for_trade ability;

	public:
		// Default constructor. Sets the level and any ability phases
		horseback_riding();

		// Constructor associates a civilization and sets the level
		horseback_riding(civilization * owner);

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
