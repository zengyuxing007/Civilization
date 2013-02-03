// An army is the container for a players units
#ifndef ARMY_H
#define ARMY_H

class civilization;

#include "unit.h"
#include <vector>
#include <map>
#include "figure.h"

class army
{
	private:
		// Array of players units (planes, infantry ect.)
		std::vector<unit> units;

		// Array of figure groups (scouts, armies stacks)
		std::vector<figure> figures;

		// Player who owns the miltary
		civilization * owner;

		// The number of figures a player has left
		int army_reserve, scout_reserve;

		int move_speed;

		// The default number of figures a player gets at the start of a game
		static int BASE_ARMY = 6, BASE_SCOUT = 2;

	public:
		army();
		army(civilization * owner);
		void addUnit(unit);
		bool addFigure(int armies, int scouts, std::map<string, int> location);
		void destroyFigure(figure& f)
};
#endif