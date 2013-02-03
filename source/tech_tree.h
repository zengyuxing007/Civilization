#ifndef TECH_TREE_H
#define TECH_TREE_H

class civilization;

#include <vector>
#include "tech_card.h"

// Every civilization has a tech tree associated with them
class tech_tree
{
	private:
		civilization* owner;
		std::vector<std::vector<tech_card> > tree;
		std::vector<int> levels;
		static std::vector<int> trade_requirements;
		static const int MAX_TECHS = 10;

	public:
		// Default constructor
		tech_tree();
		// Constructor associates a civilization to the tree
		tech_tree(civilization* o);

		static void init();

		// Adds a tech card to the tree
		bool add(tech_card tech);
};
#endif