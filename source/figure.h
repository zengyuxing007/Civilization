// Figure class: scout and army will inherit
#ifndef FIGURE_H
#define FIGURE_H

class military;

#include "game_board.h"
#include <map>

class figure
{
	private:
		// Location on the game board
		std::map<string, int> location;

		// Reference to the military's stacking limit
		military* commander;

		// Number of armies stacked
		int armies;

		// Number of scouts figures stacked
		int scouts;

	public:
		figure();
		figure(military* commander, int armies, int scouts, std::map<string, int> location);
		void move();
		void stack(figure target);
		void split();
};