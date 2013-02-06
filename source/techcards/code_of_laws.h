#ifndef CODE_OF_LAWS_H
#define CODE_OF_LAWS_H

#include <string>
#include "tech_card.h"
#include "victory_for_gold.h"

class code_of_laws : public tech_card
{	
	private:
		static std::string name;
		static std::string description;
		
		victory_for_gold ability;

	public:
		// Default constructor. Sets the level and any ability phases
		code_of_laws();

		// Constructor associates a civilization and sets the level
		code_of_laws(civilization* owner);

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
