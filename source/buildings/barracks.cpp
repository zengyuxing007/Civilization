// Building class
#include "barracks.h"
#include <string>
#include <vector>

std::string barracks::type = "Barracks";
bool barracks::limited = true;

barracks::barracks()
{
	cost = 7;
	battle_bonus.set(2);
	trade.set(2);
	available_terrain.push_back("desert");
	available_terrain.push_back("forest");
	available_terrain.push_back("grassland");
	available_terrain.push_back("mountain");
	available_terrain.push_back("any");
}

std::string barracks::getType()
{
	return type;
}

bool barracks::getLimited()
{
	return limited;
}
