// Class for all buildings market, tiles and civ
#ifndef BUILDING_H
#define BUILDING_H

#include "..\tile.h"
#include <string>
#include <vector> 

class building : public tile
{
	protected:
		static std::string type;

		// Cost it to build the building
		int cost;

		// Determines whether the building can be built more than once per city
		static bool limited;
		
		std::vector<std::string> available_terrain;
		// Icon market_icon;
		// Icon tech_icon;

	public:
		building();

		// Returns the type of building
		virtual std::string getType(); 

		// Returns whether or not the building is a star building
		virtual bool getLimited();

		// Returns the cost
		int getCost();
};
#endif