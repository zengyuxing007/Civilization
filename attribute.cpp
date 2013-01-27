//Parent attribute class
#include "attribute.h"

attribute::attribute()
{
	amount = 0;
}

attribute::attribute(int a)
{
	amount = 0;
	set(a);
}

int attribute::get()
{
	return amount;
}

void attribute::set(int a)
{
	if (amount < a)
		amount = a;
}