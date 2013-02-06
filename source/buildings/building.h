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

		// Determines whether the building can be built more than once per city
		static bool limited;
		
		std::vector<std::string> available_terrain;
		// Icon market_icon;
		// Icon tech_icon;

	public:
		building();
		virtual std::string getType(); 
		virtual bool getLimited();
};
#endif