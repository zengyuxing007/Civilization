//Attributes is a struct containing all of a civilizations stats and limits
#ifndef ATTRIBUTES_H
#define ATTRIBUTES_H

#include "attribute.h"

struct attributes
{
	attribute move_speed;
	attribute stacking_limit;
	attribute city_limit;
	attribute battle_bonus;
	attribute culture_hand;
};
#endif