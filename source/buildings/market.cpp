// Building class
#include "market.h"
#include <string>
#include <vector>

std::string market::type = "Market";
bool market::limited = true;

market::market()
{
	cost = 7;
	culture.set(1);
	trade.set(2);
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
