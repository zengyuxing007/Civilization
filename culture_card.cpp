// Culture card source

#include "culture_card.h"
#include "civilization.h"

culture_card::culture_card()
{
}

culture_card::culture_card(civilization* o)
{
	owner = o;
}