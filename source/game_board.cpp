// Game Board source

#include "game_board.h"
#include "tile.h"
#include <map>
#include <vector>

game_board::game_board(int num_players)
{
	for (int row = 0; row < 6; row++)
	{
		board.push_back(std::vector<tile>());
		for (int column = 0; column < 4; column++)
			board[column].push_back(tile());
	}
}

tile* game_board::getTile(std::map<std::string, int> location)
{
	return &board[location["row"]][location["column"]];
}
