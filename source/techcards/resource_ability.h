// Resource Ability parent class
#ifndef RESOURCE_ABILITY_H
#define RESOURCE_ABILITY_H

class civilization;

#include <string>

class resource_ability
{
	protected:
		civilization* owner;
		static std::string name;
		static std::string phase;

	public:
		resource_ability();
		resource_ability(civilization* owner);
		
		// Checks if the owner has the resources to use the ability
		virtual bool checkRequirements();

		// Returns the name of the ability
		virtual std::string getName();

		// Returns the phase the ability is allowed in
		virtual std::string getPhase();

		// Carries out the ability
		virtual void use();
};
#endif