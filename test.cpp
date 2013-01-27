#include <cstdlib>
#include <iostream>

#include "civilization.h"
#include "tech_card.h"
#include "attribute.h"
#include "resource.h"

using namespace std;

int main()
{
	resource r1;
	resource r2;
	resource r3 (20);
	r1.add(10);
	r3.spend(10);
	r2.spend(10);
	cout << r1.get() << "  " << r2.get() << "  " << r3.get() << "  ";
}