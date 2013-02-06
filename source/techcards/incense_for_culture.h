// associated with horseback riding

#ifndef INCENSE_FOR_CULTURE_H
#define INCENSE_FOR_CULTURE_H

#include "resource_ability.h"
#include <string> 

class incense_for_culture : public resource_ability
{	
	private:
		static std::string name;
		static std::string phase;
		int amount;

	public:
		incense_for_culture();
		incense_for_culture(civilization* owner);
		incense_for_culture(civilization* owner, int amount);
		virtual bool checkRequirements();
		virtual void use();
		virtual std::string getName();
		virtual std::string getPhase();
};
#endif