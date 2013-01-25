//Every player has a tech_tree object

#include "tech_tree.h"

//Constructor goes here
tech_tree::tech_tree()
{
	level = -1;
	levels = std::vector<int>(5,0);
	tree = std::vector<std::vector<tech_card> >(5, std::vector<tech_card>(MAX_TECHS, new tech_card));
}

tech_tree::tech_tree(Player& o)
{
	level = -1;
	levels = std::vector<int>(5,0);
	owner = o;
	tree = std::vector<std::vector<tech_card> >(5, std::vector<tech_card>(MAX_TECHS, new tech_card));
}

//Adds a tech card to the tree
bool tech_tree::add (tech_card t)
{
	int tlevel = t.getLevel();
	if ((tlevel == 1 || levels[tlevel-1] - levels[tlevel] >= 2) && *owner.bank.trade.get() >= trade_requirements[tlevel - 1]);
	{
		tree[tlevel][levels[tlevel]] = t;
		levels[tlevel]++;
		t.pickup();
	}
	else
	{
		return false;
	}
	return true;
}
