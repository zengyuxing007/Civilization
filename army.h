// An army is the container for a players units
#ifndef ARMY_H
#define ARMY_H

class civilization;

#include "unit.h"
#include <vector>

class army
{
	private:
		std::vector<unit> units;
		civilization * owner;
	public:
		army();
		army(civilization * owner);
		void addUnit(unit);
};
#endif