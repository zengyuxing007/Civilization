//Unit source file
#include "unit.h"

//Default constructor
unit::unit()
{
	temp_strength = 0;
	base_strength = 2;
	rank = 1;
	strength = 2;
}

//Constructor
unit::unit(int s, int r)
{
	temp_strength = 0;
	base_strength = s;
	rank = 1;
	upgrade(r);
}

//Upgrades a unit. Will not degrade or create an impossible unit
void unit::upgrade(int r)
{
	if (r >= rank && r <= MAX_RANK)
	{
		strength = base_strength + r - 1;
	}
}

//Returns the strength
int unit::getStrength()
{
	return strength;
}

void unit::addTemp(int a)
{
	temp_strength += a;
}