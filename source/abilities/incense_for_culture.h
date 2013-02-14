// associated with horseback riding

#ifndef INCENSE_FOR_CULTURE_H
#define INCENSE_FOR_CULTURE_H

#include "resource_ability.h"
#include <string> 

class incense_for_culture : public resource_ability
{	
	private:
		static std::string name;
		static std::string phase;
		int amount;

	public:
		incense_for_culture();
		incense_for_culture(civilization* owner);
		incense_for_culture(civilization* owner, int amount);
		
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