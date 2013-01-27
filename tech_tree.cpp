//Every player has a tech_tree object
#include <vector>
#include "tech_tree.h"
#include "civilization.h"
#include "tech_card.h"

std::vector<int> tech_tree::trade_requirements(5,6);

//Constructor goes here
tech_tree::tech_tree()
{
	levels = std::vector<int>(5,0);
	tech_card t;
	tree = std::vector<std::vector<tech_card> >(5, std::vector<tech_card>(MAX_TECHS, t));
}

tech_tree::tech_tree(civilization * o)
{
	levels = std::vector<int>(5,0);
	owner = o;
	tech_card t;
	tree = std::vector<std::vector<tech_card> >(5, std::vector<tech_card>(MAX_TECHS, t));
}

void tech_tree::init()
{
	if (trade_requirements[1] == 6)
		for (int i = 0; i < trade_requirements.size(); i++)
			trade_requirements[i] += i * 5;
}

//Adds a tech card to the tree
bool tech_tree::add (tech_card t)
{
	int tlevel = t.getLevel();
	if ((tlevel == 1 || levels[tlevel-1] - levels[tlevel] >= 2) && owner->bank.trade.get() >= trade_requirements[tlevel - 1])
	{
		tree[tlevel][levels[tlevel]] = t;
		levels[tlevel]++;
		t.onLearn();
	}
	else
	{
		return false;
	}
	return true;
}
