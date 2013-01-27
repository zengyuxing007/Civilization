#include <cstdlib>
#include <iostream>

#include "civilization.h"
#include "tech_card.h"
#include "attribute.h"

using namespace std;

int main()
{
	// Player testPlayer1;
	//tech_card t;
	//testPlayer1.techs.add(t);
	attribute a;
	a.set(40);
	attribute b (20);
	cout << a.get();
	cout << b.get();
}