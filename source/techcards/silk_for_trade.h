// associated with horseback riding

#ifndef INCENSE_FOR_CULTURE_H
#define INCENSE_FOR_CULTURE_H

#include "resource_ability.h"
#include <string> 

class silk_for_trade : public resource_ability
{	
	private:
		static std::string name;
		static std::string phase;
		int amount;

	public:
		silk_for_trade();
		silk_for_trade(civilization* owner);
		silk_for_trade(civilization* owner, int amount);
		virtual bool checkRequirements();
		virtual void use();
		virtual std::string getName();
		virtual std::string getPhase();
};
#endif