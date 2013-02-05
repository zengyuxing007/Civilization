//Every player has a tech_tree object

#include <vector>
#include "tech_tree.h"
#include "civilization.h"
#include ".\techcards\tech_card.h"

std::vector<int> tech_tree::trade_requirements(5,6);

//Constructor goes here
tech_tree::tech_tree()
{
	levels = std::vector<int>(5,0);
	tree = std::vector<std::vector<tech_card> >(5, std::vector<tech_card>(MAX_TECHS, tech_card()));
}

tech_tree::tech_tree(civilization * o)
{
	levels = std::vector<int>(5,0);
	owner = o;
	tree = std::vector<std::vector<tech_card> >(5, std::vector<tech_card>(MAX_TECHS, tech_card()));
}

void tech_tree::init()
{
	for (int i = 0; i < trade_requirements.size(); i++)
		trade_requirements[i] += i * 5;
}

//Adds a tech card to the tree
bool tech_tree::add (tech_card* t)
{
	int tlevel = t->getLevel();
	if ((tlevel == 1 || levels[tlevel-1] - levels[tlevel] >= 2) && owner->bank.trade.get() >= trade_requirements[tlevel - 1])
	{
		t->setOwner(owner);
		tree[tlevel-1][levels[tlevel-1]] = *t;
		levels[tlevel-1]++;
		t->onLearn();
		owner->bank.trade.spend(trade_requirements[tlevel-1]);
	}
	else
	{
		return false;
	}
	return true;
}
