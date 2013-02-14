// associated with horseback riding

#ifndef SPIES_FOR_CITY_CANCEL
#define SPIES_FOR_CITY_CANCEL

#include "resource_ability.h"
#include <string> 

class spies_for_city_cancel : public resource_ability
{	
	private:
		static std::string name;
		static std::string phase;

	public:
		spies_for_city_cancel();
		spies_for_city_cancel(civilization* owner);
		
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