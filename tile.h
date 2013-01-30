//Everything that can be placed as a tile on the ground
//will inherit from this tile class
#ifndef TILE_H
#define TILE_H

#include "resource.h"

class tile
{
	private:
		resource trade;
		resource gold;
		resource production;
		resource culture;
		resource farm;
		bool discovered;

	public:
		tile();
		~tile();
};
#endif