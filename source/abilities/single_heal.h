// associated with horseback riding

#ifndef SINGLE_HEAL_H
#define SINGLE_HEAL_H

#include "resource_ability.h"
#include <string> 

class single_heal : public resource_ability
{	
	private:
		static std::string name;
		static std::string phase;
		int amount;

	public:
		single_heal();
		single_heal(civilization* owner);
		single_heal(civilization* owner, int amount);
		
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