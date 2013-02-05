// associated with horseback riding

#ifndef SILK_FOR_TRADE_H
#define SILK_FOR_TRADE_H

#include "resource_ability.h"
#include <string> 

class silk_for_trade : public resource_ability
{	
	private:
		static std::string name;

	public:
		silk_for_trade();
		silk_for_trade(civilization* owner);
		virtual bool checkRequirements();
		virtual void use();
		virtual std::string getName();
};
#endif