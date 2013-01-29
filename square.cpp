//Square source

#include <string>
#include <map>
#include <vector>
#include "square.h"
#include "tile.h"
#include "game_board.h"

typedef std::map<std::string, int> coor;

square::square(game_board* b, coor tl)
{
	board = b;
	top_left = tl;
	for (int row = 0; row < WIDTH; row++)
	{
		square_tiles.push_back(std::vector<tile*>());
		for (int column = 0; column < WIDTH; column++)
		{
			coor location;
			location["row"] = row + tl["row"];
			location["column"] = column + tl["column"];
			square_tiles[row].push_back(board->getTile(location));
		}
	}

	predef.clear();
}

square::square(game_board* b, coor tl, std::vector<std::vector<tile> > p)
{
	board = b;
	top_left = tl;
	for (int row = 0; row < WIDTH; row++)
	{
		square_tiles.push_back(std::vector<tile*>());
		for (int column = 0; column < WIDTH; column++)
		{
			coor location;
			location["row"] = row + tl["row"];
			location["column"] = column + tl["column"];
			square_tiles[row].push_back(board->getTile(location));
		}
	}
	predef = p;	
}

void square::flip()
{
	if (!predef.empty())
		for(int row = 0; row < WIDTH; row++)
			for (int column = 0; column < WIDTH; column++)
				*square_tiles[row][column] = predef[row][column];
}

bool square::contains(tile* t)
{
	for(int row = 0; row < WIDTH; row++)
		for (int column = 0; column < WIDTH; column++)
			if (t == square_tiles[row][column])
				return true;
	return false;
}