// Types of tickets

#include <cstdlib>
#include <iostream>
using namespace std;
class tech_card
{
	private:
		int level;
		//Background background();
		//Icon icon();
		string ability;
	public:
		tech_card()
		{
			level = 0;
			ability = "none";
		}
		
		tech_card(int l, /*Icon i,*/ string a)
		{
			level = l;
			// icon = i;
			ability = a;
		}
		tech_card(int l/*,*/ /*Icon i*/)
		{
			level = l;
			// icon = i;
		}

		void pickup(/*Player p*/)
		{
			//p.tech_tree.add(level);
		}
};

int main()
{
	cout << "Hello World";
	return 0;
}