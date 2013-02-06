// Building class
#include "market.h"
#include <string>
#include <vector>

std::string market::type = "Market";
bool market::limited = false;

market::market()
{
	culture.add(1);
	trade.add(2);
	available_terrain.push_back("desert");
}

std::string market::getType()
{
	return type;
}

bool market::getLimited()
{
	return limited;
}