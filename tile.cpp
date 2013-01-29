//Tile source file

#include "tile.h"
#include "resource.h"

tile::tile()
{}

tile::~tile()
{}

int tile::getTrade()
{
	return trade;
}

int tile::getGold()
{
	return gold;
}

int tile::getCulture()
{
	return culture;
}

resource tile::getResource()
{
	return farm;
}