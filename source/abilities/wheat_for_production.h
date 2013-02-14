// associated with horseback riding

#ifndef WHEAT_FOR_CULTURE_H
#define WHEAT_FOR_CULTURE_H

#include "resource_ability.h"
#include <string> 

class wheat_for_production : public resource_ability
{	
	private:
		static std::string name;
		static std::string phase;
		int amount;

	public:
		wheat_for_production();
		wheat_for_production(civilization* owner);
		wheat_for_production(civilization* owner, int amount);
		
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