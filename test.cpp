#include <cstdlib>
#include <iostream>

#include "civilization.h"
#include "tech_card.h"
#include "attribute.h"
#include "resource.h"
#include "tech_tree.h"
#include "unit.h"

using namespace std;

int main()
{
	tech_tree::init();
	unit u1;
	unit u2(1,1);
	unit u3(3,4);
	civilization c;
	cout << u1.getStrength() << "  " << u2.getStrength() << "  " << u3.getStrength() << "  ";
}