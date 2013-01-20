// Types of tickets

#include <cstdlib>
#include <iostream>
using namespace std;

//The resources in a owned by a player
class resource
{
	private:
		int quanity;
	public:
		//Constructor
		resource()
		{
			quanity = 0;
		}
		resource(int x)
		{
			if (x >= 0)
				quanity = x;
			else
				quanity = 0;
		}
		int get()
		{
			return quanity;
		}
		int add(int a)
		{
			 quanity += a;
		}
		int spend(int a)
		{
			quanity -= a;
		}
};

//Contains all information pertaining to a player
class Player
{
	private:
		int gold;
		int trade;
		int move_speed;
		int city_limit;
	public:
		resource silk;
		resource iron;
		resource wheat;
		resource incence;
		resource uranium; 
		resource spies; 
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

		int getMS()
		{
			return move_speed;
		}

		void setMS(int x)
		{
			move_speed = x;
		}

		void addTrade(int x)
		{
			trade += x;
		}
};

//Base template for tech cards
class tech_card
{
	protected:
		int level;
		//Background background();
		Player owner;
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
		tech_card(int l, Player o,/* Icon i,*/string & a)
		{
			owner = o;
			level = l;
			// icon = i;
			ability = a;
		}

		//Function to play on pickup
		void pickup()
		{
			//p.tech_tree.add(level);
		}
};

//Horseback Riding
class horseback_riding:tech_card
{
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
};



int main()
{
	cout << "Hello World";
	return 0;
}