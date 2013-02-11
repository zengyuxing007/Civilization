//Everything that can be placed as a tile on the ground
//will inherit from this tile class
#ifndef TILE_H
#define TILE_H

class figure;
#include "resource.h"
#include <string>

class tile
{
	protected:
		static std::string type;

		resource trade;
		resource gold;
		resource production;
		resource culture;
		resource farm;
		resource battle_bonus;
		
		// Has this tile been discovered
		bool discovered;

		// Points to any figure that is on the tile else null
		figure* army;
		
	public:
		tile();
		virtual std::string getType();
};
#endif