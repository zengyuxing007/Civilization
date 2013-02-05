#ifndef HORSEBACK_RIDING_H
#define HORSEBACK_RIDING_H

#include <string>
#include "tech_card.h"
#include "silk_for_trade.h"

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

		virtual void onLearn();
		virtual int getLevel();
		virtual std::string getName();
		virtual std::string getDescription();
};
#endif
