#include <cstdlib>
#include <iostream>

#include "civilization.h"
#include "tech_card.h"
#include "attribute.h"
#include "resource.h"
#include "tech_tree.h"
#include "unit.h"
#include "army.h"
#include "city.h"

using namespace std;

int main()
{
	tech_tree::init();
	civilization c;
	building b;
	tile t;
	city fonthill;
	cout << "Trade: " << fonthill.trade.get() << endl << "Culture: " << fonthill.culture.get() << endl << "Gold: " << fonthill.gold.get() << endl << "Production: " << fonthill.production.get() << endl;
}