//A 4x4 plate of tiles
#ifndef SQUARE_H
#define SQUARE_H

class game_board;

#include "tile.h"
#include <string>
#include <map>
#include <vector>

class square
{
	private:
		game_board* board;
		std::vector<std::vector<tile *> > square_tiles;
		std::map<std::string, int> top_left;
		std::vector<std::vector<tile> > predef;

	public:
		static const int WIDTH = 4;
		square(game_board* board, std::map<std::string, int> top_left);
		
		square(game_board* board, 
				std::map<std::string, int> top_left,
				 std::vector<std::vector< tile> > predef);

		//Will flip all tiles from undiscovered to discovered
		void flip();

		// Checks if the square contains a specific board game tile
		bool contains(tile* t);
};
#endif