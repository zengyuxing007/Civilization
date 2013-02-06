// Building class
#include "building.h"
#include <string>

std::string building::type = "building";
bool building::limited = true;

building::building()
{
	//constructor
}

std::string building::getType()
{
	return type;
}

bool building::getLimited()
{
	return limited;
}