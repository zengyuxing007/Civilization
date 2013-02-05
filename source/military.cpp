//Military source file

#include "civilization.h"
#include "figure.h"
#include "military.h"
#include "unit.h"
#include <vector>
#include <map>
#include <string> 

military::military()
{
	army_reserve = BASE_ARMY;
	scout_reserve = BASE_SCOUTS;
}

military::military(civilization * o)
{
	owner = o;
	army_reserve = BASE_ARMY;
	scout_reserve = BASE_SCOUTS;
}

void military::addUnit(unit u)
{
	units.push_back(u);
} 

bool military::addFigure(int armies, int scouts, std::map<std::string, int> location)
{
	// Checks to make sure we have enough units in reserve
	if (army_reserve > armies && scout_reserve > scouts)
	{
		army_reserve -= armies;
		scout_reserve -= scouts;
	}
	else
		return false;

	// Adds a new figure group
	figures.push_back(figure(this, armies, scouts, location));

	return true;
}

// Removes a specific figure from array.
void military::destroyFigure(figure& f)
{
	figure* dead_figure = &f;
	for(int i = 0; i < figures.size(); i++)
	{
		if (dead_figure = &figures[i])
		{
    		figures.erase(figures.begin()+i);
    		i--;
    	}

	}
}

int military::getMoveSpeed()
{
	return owner->stats.move_speed.get();
}