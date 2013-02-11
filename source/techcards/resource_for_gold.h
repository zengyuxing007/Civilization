// associated with horseback riding

#ifndef RESOURCE_FOR_GOLD_H
#define RESOURCE_FOR_GOLD_H

#include "resource_ability.h"
#include <string> 

class resource_for_gold : public resource_ability
{	
	private:
		static std::string name;
		static std::string phase;

	public:
		resource_for_gold();
		resource_for_gold(civilization* owner);
		
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

		// returns the description
		std::string getDescription();
};
#endif