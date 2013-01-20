// Types of tickets

#include <cstdlib>
#include <iostream>
using namespace std;

//Base template for tech cards
class tech_card
{
	private:
		int level;
		//Background background();
		//Player owner();
		//Icon icon();
		string ability;
	public:
		//Default Constructor
		tech_card()
		{
			level = 0;
			ability = "none";
		}
		
		//Constructor
		tech_card(int l, /*, Player o, Icon i,*/string a)
		{
			// owner = o;
			level = l;
			// icon = i;
			ability = a;
		}

		//Function to play on pickup
		void pickup(/*Player p*/)
		{
			//p.tech_tree.add(level);
		}
};

//Horseback Riding
class horseback_riding:tech_card
{
	public:

		//Play on pickup
		void pickup(/*Player p*/)
		{/*
			p.tech_tree.add(level);
			if (p.move_speed < 3)
				p.move_speed = 3;
		*/}

		void ability()
		{
			if (true/*owner.resources.getSilk() >= 1*/)
			{/*
				Player p = choosePlayer();
				owner.trade.add(6);
				p.trade.add(9);
			*/}
		}
};

class Player
{
	private:
		int gold;
		int trade;
		int move_speed;
		int city_limit;
	public:
		Player()
		{
			gold = 0;
			trade = 0;
			move_speed = 2;
			city_limit = 2;
		}

		int getGold()
		{
			return gold;
		}

		int getTrade()
		{
			return trade;		
		}
};


int main()
{
	cout << "Hello World";
	return 0;
}