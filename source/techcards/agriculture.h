#ifndef AGRICULTURE_H
#define AGRICULTURE_H

#include <string>
#include "tech_card.h"
// #include "resource_for_gold.h"

class agriculture : public tech_card
{	
	private:
		static std::string name;
		static std::string description;

	public:
		// Default constructor. Sets the level and any ability phases
		agriculture();

		// Constructor associates a civilization and sets the level
		agriculture(civilization * owner);

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
