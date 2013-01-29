// city class. This ones going to be difficult
#ifndef CITY_H
#define CITY_H

class tile;

#include <vector>
#include "resource.h"

class city
{
	private:
		// Pointers to tiles in the outskirts
		std::vector<tile *> outskirts;

	public:
		// Constructor
		city();

		// Resources in city outskirts
		resource trade;
		resource gold;
		resource production;
		resource culture;
		std::vector<resource> farms;


		// Check all trade, resources ect from outskirts.
		void collect();
};
#endif