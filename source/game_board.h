// Contains all of the tiles 
#ifndef GAME_BOARD_H
#define GAME_BOARD_H

#include "tile.h"
#include "square.h"
#include <vector>
#include <map>
#include <string>

class game_board
{
	private:
		// Vector of tiles (actual values)
		std::vector<std::vector<tile> > board;

		// Vector of the 4x4 pieces. Each square contains pointers
		std::vector<square> squares;

	public:
		game_board(int num_players);

		// Returns a pointer to a specific tile
		tile* getTile(std::map<std::string, int> location);
};
#endif