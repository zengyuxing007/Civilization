// A bank for storing a players resources

#include "abilities.h"
#include ".\techcards\resource_ability.h"
#include <vector>
#include "civilization.h"

abilities::abilities()
{
	owner = NULL;
}

abilities::abilities(civilization* o)
{
	owner = o;
}

void abilities::add(resource_ability* r)
{
	resource_abilities.push_back(r);
}

void abilities::activate(int index)
{
	if (index < resource_abilities.size()){}
		resource_abilities[index]->use();
}