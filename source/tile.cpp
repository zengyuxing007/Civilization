//Tile source file

#include "figure.h"
#include "tile.h"
#include "resource.h"
#include <string>

std::string tile::type = "tile";

tile::tile()
{
	discovered = false;
	army = NULL;
}

std::string tile::getType()
{
	return type;
}
