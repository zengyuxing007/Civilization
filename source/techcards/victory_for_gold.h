// associated with horseback riding

#ifndef VICTORY_FOR_GOLD_H
#define VICTORY_FOR_GOLD_H

#include "resource_ability.h"
#include <string> 

class victory_for_gold : public resource_ability
{	
	private:
		static std::string name;
		static std::string phase;

	public:
		victory_for_gold();
		victory_for_gold(civilization* owner);
		virtual bool checkRequirements();
		virtual void use();
		virtual std::string getName();
		virtual std::string getPhase();
};
#endif