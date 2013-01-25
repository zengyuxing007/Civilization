#ifndef TECH_TREE_H
#define TECH_TREE_H

class Player;

#include <vector>
#include "tech_card.h"

int trade_requirements[5] = {6, 11, 16, 21, 26};
const int MAX_TECHS = 10;
	
// Every player has a tech tree associated with them
class tech_tree
{
	private:
		Player& owner;
		std::vector<std::vector<tech_card> > tree;
		std::vector<int> levels;
	public:
		// Default constructor
		tech_tree();
		// Constructor associates a player to the tree
		tech_tree(Player& o);

		// Adds a tech card to the tree
		void add(tech_card tech);
};
#endif