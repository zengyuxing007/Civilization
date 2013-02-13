// A bank for storing a player's abilities
#ifndef ABILITIES_H
#define ABILITIES_H

class civilization;

#include ".\abilities\resource_ability.h"
#include <vector>

class abilities
{
	private:
		// Array of references to 
		std::vector<resource_ability*> resource_abilities;
		civilization* owner;

	public:
		abilities();
		abilities(civilization* owner);

		// Adds a resource ability to our growing power
		void add(resource_ability* ability);

		// Activates a resource ability
		void activate(int index);
};
#endif