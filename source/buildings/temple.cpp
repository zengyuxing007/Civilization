// Building class
#include "temple.h"
#include <string>
#include <vector>

std::string temple::type = "Temple";
bool temple::limited = true;

temple::temple()
{
	cost = 7;
	culture.set(2);
	available_terrain.push_back("any");
}

std::string temple::getType()
{
	return type;
}

bool temple::getLimited()
{
	return limited;
}
