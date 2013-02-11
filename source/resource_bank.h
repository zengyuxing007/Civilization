#ifndef RESOURCE_BANK_H_
#define RESOURCE_BANK_H_

#include "resource.h"
#include <vector>

class resource_bank
{
	private:
		std::vector<resource*> bank;

	public:
		resource silk;
		resource iron;
		resource wheat;
		resource incense;
		resource uranium; 
		resource spies; 
		resource spendable_gold;
		resource solid_gold;
		resource culture;
		resource trade;	

		resource_bank();

		// Returns the total of the resource resources like silk. Probs gonna split this up.
		int getTotalResources();
};		
#endif