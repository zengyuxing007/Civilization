
#include "resource_bank.h"
#include "resource.h"

resource_bank::resource_bank()
{
	bank.push_back(&silk);
	bank.push_back(&incense);
	bank.push_back(&uranium);
	bank.push_back(&wheat);
	bank.push_back(&iron);
	bank.push_back(&spies);
}

int resource_bank::getTotalResources()
{
	int t = 0;
	for (int i = 0; i < bank.size(); i++)
		t += bank[i]->get();
	return t;
}