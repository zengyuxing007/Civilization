// associated with horseback riding

#ifndef IRON_FOR_STRENGTH
#define IRON_FOR_STRENGTH

#include "resource_ability.h"
#include <string> 

class iron_for_strength : public resource_ability
{	
	private:
		static std::string name;
		static std::string phase;
		int amount;

	public:
		iron_for_strength();
		iron_for_strength(civilization* owner);
		iron_for_strength(civilization* owner, int amount);
		
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