// Resource Ability parent class
#ifndef RESOURCE_ABILITY_H
#define RESOURCE_ABILITY_H

class civilization;

#include <string>
#include "..\resource.h"

class resource_ability
{
	protected:
		// owner of the ability
		civilization* owner;
		static std::string name;
		static std::string phase;

		// Max amount of gold allowed on a tech card
		static const int max_gold = 4;

		// Description of the ability
		std::string description;

		// Determines whether the ability has been used this turn or not
		bool used;

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

		// Sets the description of the ability
		virtual void setDescription();

		// returns the description
		std::string getDescription();

		// Gold counter for coins on the card
		resource gold;

		// To be run at the start of a turn. Tells the ability it can be used again
		void reset();
};
#endif