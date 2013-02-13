// Class for all buildings market, tiles and civ
#ifndef LIBRARY_H
#define LIBRARY_H

#include "building.h"
#include <string>

class library : public building
{
	private:
		static std::string type;
		
		// Determines whether the building can be built more than once per city
		static bool limited;
		
		// Icon market_icon;
		// Icon tech_icon;

	public:
		library();
		virtual std::string getType(); 
		virtual bool getLimited();
};
#endif