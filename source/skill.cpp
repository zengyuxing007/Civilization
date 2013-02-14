// Boolean that defines if a player has a skill or not

#include "skill.h"

skill::skill()
{
	known = false;
}

skill::skill(bool b)
{
	known = b;
}

void skill::set(bool b)
{
	known = b;
}

bool skill::get()
{
	return known;
}