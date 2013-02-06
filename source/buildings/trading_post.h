// Class for all buildings market, tiles and civ
#ifndef TRADING_POST_H
#define TRADING_POST_H

#include "building.h"
#include <string>

class trading_post : public building
{
	private:
		static std::string type;
		
		// Determines whether the building can be built more than once per city
		static bool limited;
		
		// Icon market_icon;
		// Icon tech_icon;

	public:
		trading_post();
		virtual std::string getType(); 
		virtual bool getLimited();
};
#endif