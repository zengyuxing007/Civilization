// Class for all buildings market, tiles and civ
#ifndef TEMPLE_H
#define TEMPLE_H

#include "building.h"
#include <string>

class temple : public building
{
	private:
		static std::string type;
		
		// Determines whether the building can be built more than once per city
		static bool limited;
		
		// Icon market_icon;
		// Icon tech_icon;

	public:
		temple();
		virtual std::string getType(); 
		virtual bool getLimited();
};
#endif