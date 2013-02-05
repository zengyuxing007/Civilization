// Figure class: scout and army will inherit
#ifndef FIGURE_H
#define FIGURE_H

class military;

#include "game_board.h"
#include <map>
#include <string>

typedef std::map<std::string, int> coor;

class figure
{
	protected:
		// Location on the game board
		coor location;

		// Reference to the military's stacking limit
		military* commander;

		// Number of armies stacked
		int armies;

		// Number of scouts figures stacked
		int scouts;

	public:
		figure();
		figure(military* commander, int armies, int scouts, coor location);
		void move();
		bool stack(figure& target);
		void split();
		bool check();
};
#endif