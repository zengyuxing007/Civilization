// Types of tickets

#include <cstdlib>
#include <iostream>
#include <vector>

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
	test t (4);
	innertest i;
	i.func(t);
	cout << t.x;
	system("PAUSE");
}