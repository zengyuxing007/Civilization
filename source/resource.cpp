//The resources in a owned by a player
//Constructor

#include "resource.h"

resource::resource()
{
	amount = 0;
}

resource::resource(int initial)
{
	if (initial >= 0)
		amount = initial;
	else
		amount = 0;
}

int resource::get()
{
	return amount;
}

void resource::add(int a)
{
	 amount += a;
}

void resource::spend(int a)
{
	amount -= a;
	if (amount < 0)
		amount = 0;
}