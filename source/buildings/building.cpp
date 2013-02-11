// Building class
#include "building.h"
#include <string>

std::string building::type = "building";
bool building::limited = true;

building::building()
{
	cost = 0;
}

std::string building::getType()
{
	return type;
}

bool building::getLimited()
{
	return limited;
}

int building::getCost()
{
	return cost;
}