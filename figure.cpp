// Figure source

#include "military.h"
#include "figure.h"
#include "gameboard.h"
#include <map>
#include <iostream>

figure::figure()
{
	armies = 0;
	scouts = 0;
}


figure::figure(military* m, int a, int s, std::map<string, int> l)
{
	commander = m;
	location = l;
	armies = 0;
	scouts = 0;
}

void figure::move()
{
	// This is wrong. The move function should be what the check function is and input should be done on a higher level.
	for(int i = 0; i < commander->move_speed; i++)
	{
		char direction;
		direction = getchar();
		switch (direction)
		{
			case 'r':
				check(1, 0);
			case 'l':
				check(-1, 0);
			case 'u':
				check(0, 1);
			case 'd':
				check(0, -1);
			case 's':
				split();
				break;
			default:
				break();
		}
	}
}

// Adds the units from another group to this figure group
// Needs adjustment since right now it stacks all of the two figure groups when really the stack should be optional
bool figure::stack(figure& f)
{
	if (armies + scouts + f.armies + f.scouts)
	{
		armies += f.armies;
		scouts += f.scouts;
		commander->destroyFigure(f);
	}
}

// Splites up the figure group into smaller groups
void figure::split()
{
	// Loops until the player is done splitting or empties the figure group
	// Each loop is one new figure group
	do
	{
		// The number of each type of figure to add to the group;
		int numS = 0, numA = 0;

		// If you have scouts in the figure group it will loop until it finds a valid entry 
		while (scouts != 0 && numS > scouts)
			cin >> numS;

		// If you have armies in the figure group it will loop until it finds a valid entry
		while (armies != 0 && numS > armies)
			cin >> numA;

		// Adds the new figure group 
		commander->addFigure(numS, numA, location);

		// Removes the added figures from current group
		armies -= numA;
		scouts -= numS;
	}while(numS >= 0 && numA >= 0 && (scouts > 0 || armies > 0));

	// If the player has eliminated all the figures in the original figure group then it is empty and should die
	if (!scouts && !armies)
		commander->destroyFigure(*this);
}