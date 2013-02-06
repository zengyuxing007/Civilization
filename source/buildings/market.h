// Class for all buildings market, tiles and civ
#ifndef MARKET_H
#define MARKET_H

#include "building.h"
#include <string>

class market : public building
{
	private:
		static std::string type;
		
		// Determines whether the building can be built more than once per city
		static bool limited;
		
		// Icon market_icon;
		// Icon tech_icon;

	public:
		market();
		virtual std::string getType(); 
		virtual bool getLimited();
};
#endif