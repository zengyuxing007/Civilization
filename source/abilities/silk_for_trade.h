// associated with horseback riding

#ifndef SILK_FOR_TRADE_H
#define SILK_FOR_TRADE_H

#include "resource_ability.h"
#include <string> 

class silk_for_trade : public resource_ability
{	
	private:
		static std::string name;
		static std::string phase;

	public:
		silk_for_trade();
		silk_for_trade(civilization* owner);
		silk_for_trade(civilization* owner, int amount);
		
		// Checks if the owner has the resources to use the ability
		virtual bool checkRequirements();

		// Returns the name of the ability
		virtual std::string getName();

		// Returns the phase the ability is allowed in
		virtual std::string getPhase();

		// Carries out the ability
		virtual void use();

		// Sets the description of the ability
		virtual void setDescription();
};
#endif