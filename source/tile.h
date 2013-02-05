//Everything that can be placed as a tile on the ground
//will inherit from this tile class
#ifndef TILE_H
#define TILE_H

class figure;
#include "resource.h"

class tile
{
	private:
		resource trade;
		resource gold;
		resource production;
		resource culture;
		resource farm;

		// Has this tile been discovered
		bool discovered;

		// Points to any figure that is on the tile else null
		figure* army;
		
	public:
		tile();
		~tile();
};
#endif