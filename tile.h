//Everything that can be placed as a tile on the ground
//will inherit from this tile class

#include "resource.h"

class tile
{
	private:
		int trade;
		int gold;
		int production;
		int culture;
		resource farm;

	public:
		tile();
		~tile();

		int getTrade();
		int getGold();
		int getProduction();
		int getCulture();
		resource getResource();
};