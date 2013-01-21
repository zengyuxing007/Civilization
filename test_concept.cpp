// Types of tickets

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

class test
{
	private:
		vector<vector<int> > tree;
	public:
		int ta[5] = {1,2,3,4,5};
		test()
		{
			 tree = vector<vector<int> > (5, vector<int>(7, 10));
		}
		int getX(int i, int j)
		{
			return tree[i][j];
		}
};	

int main()
{
	test t;
	for (int i = 0; i < 4; i++)
		cout << t.ta[i] << " array" << endl;/*
		for (int j = 0; j < 4; j++)
	{
		cout << t.getX(i, j);
	}*/
}