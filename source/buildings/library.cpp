// Building class
#include "library.h"
#include <string>
#include <vector>

std::string library::type = "Library";
bool library::limited = false;

library::library()
{
	cost = 7;
	trade.set(1);
	culture.set(1);
	available_terrain.push_back("grassland");
}

std::string library::getType()
{
	return type;
}

bool library::getLimited()
{
	return limited;
}
