// Building class
#include "trading_post.h"
#include <string>
#include <vector>

std::string trading_post::type = "Trading Post";
bool trading_post::limited = false;

trading_post::trading_post()
{
	culture.add(1);
	trade.add(2);
	available_terrain.push_back("desert");
}

std::string trading_post::getType()
{
	return type;
}

bool trading_post::getLimited()
{
	return limited;
}