// Culture hand source file

#include <vector>
#include "culture_card.h"
#include "culture_hand.h"
#include "civilization.h"

culture_hand::culture_hand()
{
	hand_size = 2;
}

culture_hand::culture_hand(civilization* o)
{
	owner = o;
	hand_size = 2;
}

bool culture_hand::add(culture_card c)
{
	if (hand_size > 0)
	{
		if (hand.size() < (unsigned)hand_size)
		{
			hand.push_back(c);
			return true;
		}
	}
	return false;
}