// Types of tickets

#include <cstdlib>
#include <iostream>
#include <vector>
#include "Player.h"
using namespace std;



class test
{
	public:
		int x;
		test(int a)
		{
			x = a;
		}
};	

class innertest
{
	public:
	void func(test & t)
	{
		t.x ++;
	}
} ;

int main()
{
	Player testPlayer;
	system("PAUSE");
}