// Types of tickets

#include <cstdlib>
#include <iostream>
#include <vector>

int trade_requirements[5] = {6, 11, 16, 21, 26};

//Base template for tech cards
//Default Constructor
tech_card::tech_card()
{
	level = 0;
	ability_phase = "none";
}

//Constructor
tech_card::tech_card(int l, Bank &b,/* Icon i,*/string & a)
{
	bank = b;
	level = l;
	// icon = i;
	ability_phase = a;
}

int tech_card::getLevel()
{
	return level;
}
//Function to play on pickup
void tech_card::pickup()
{
	//p.tech_tree.add(level);
}
};

//Horseback Riding
class horseback_riding:tech_card
{/*
	public:

		//Play on pickup
		void pickup()
		{
			//owner.tech_tree.add(level);
			if (owner.getMS() < 3)
				owner.setMS(3);
		}

		void ability()
		{
			if (owner.silk.get() >= 1)
			{
				owner.silk.spend(1);
				Player p;
				owner.addTrade(6);
				p.addTrade(9);
			}
		}
*/};




