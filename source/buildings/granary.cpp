// Building class
#include "granary.h"
#include <string>
#include <vector>

std::string granary::type = "Granary";
bool granary::limited = false;

granary::granary()
{
	cost = 5;
	trade.set(1);
	production.set(1);
	available_terrain.push_back("grassland");
}

std::string granary::getType()
{
	return type;
}

bool granary::getLimited()
{
	return limited;
}
