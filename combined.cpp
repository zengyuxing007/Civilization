// Types of tickets

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;
int trade_requirements[5] = {6, 11, 16, 21, 26};


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

struct Bank
{
	resource silk;
	resource iron;
	resource wheat;
	resource incence;
	resource uranium; 
	resource spies; 
	resource gold;
	resource trade;	
};

//Base template for tech cards
class tech_card
{
	protected:
		int level;
		Bank bank;
		//Background background();
		int owner_id;
		//Icon icon();
		//phase in which ability can be used
		string ability_phase;
	public:
		//Default Constructor
		tech_card()
		{
			level = 0;
			ability_phase = "none";
		}
		
		//Constructor
		tech_card(int l, Bank &b,/* Icon i,*/string & a)
		{
			bank = b;
			level = l;
			// icon = i;
			ability_phase = a;
		}

		int getLevel()
		{
			return level;
		}
		//Function to play on pickup
		void pickup()
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

class TechTree
{
	private:
		tech_card t;
		vector<vector<tech_card> > tree;
		vector<int> levels;
		
	public:
		//Constructor goes here
		TechTree()
		{
			tree = vector<vector<tech_card> > (5, vector<tech_card>(10, t));
			levels = vector<int> (5,0);
		}
		//Adds a tech card to the tree
		bool add (tech_card t, int trade)
		{
			int tlevel = t.getLevel();
			if ((tlevel == 1 || levels[tlevel-1] - levels[tlevel] >= 2) && trade >= trade_requirements[tlevel]);
		}
};

//Contains all information pertaining to a player
class Player
{
	private:
		Bank bank;
		int move_speed;
		int city_limit;
	public:
		//All possible resources
		TechTree tech_tree;
	
		//Constructor
		Player()
		{
			move_speed = 2;
			city_limit = 2;
		}

		int getMS()
		{
			return move_speed;
		}

		void setMS(int x)
		{
			move_speed = x;
		}
};

int main()
{
	vector<int> test(5, 25);
	for (vector<int>::iterator it = test.begin(); it != test.end(); ++it)
	{
		cout << *it << endl;
	}
	cout << "Hello World";
	return 0;
}