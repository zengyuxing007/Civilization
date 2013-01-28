#include <cstdlib>
#include <iostream>

#include "civilization.h"
#include "tech_card.h"
#include "attribute.h"
#include "resource.h"
#include "tech_tree.h"
#include "unit.h"
#include "army.h"

using namespace std;

int main()
{
	tech_tree::init();
	civilization c;
	unit u(2, 1);
	army a;
	army a1(&c);
	a.addUnit(u);
	a1.addUnit(u);
}