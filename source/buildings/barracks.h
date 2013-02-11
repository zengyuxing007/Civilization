#ifndef BARRACKS_H
#define BARRACKS_H

#include "building.h"
#include <string>

class barracks : public building
{
	private:
		static std::string type;
		
		// Determines whether the building can be built more than once per city
		static bool limited;
		
		// Icon barracks_icon;
		// Icon tech_icon;

	public:
		barracks();
		virtual std::string getType(); 
		virtual bool getLimited();
};
#endif