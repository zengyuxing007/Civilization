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

void cough(int& s)
{
	int* r = &s;
	cout << *r;
}

int main()
{
	int s = 1;
	cough (s);
	system("PAUSE");
}