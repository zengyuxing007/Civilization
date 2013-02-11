#include <cstdlib>
#include <iostream>

#include ".\source\techcards\philosophy.h"
#include ".\source\civilization.h"
#include ".\source\tech_tree.h"
#include ".\source\techcards\tech_card.h"
#include ".\source\techcards\silk_for_trade.h"
#include ".\source\techcards\resource_ability.h"
using namespace std;

int main()
{
	tech_tree::init();
	
	civilization c;
	philosophy h;
	c.bank.trade.add(6);
	tech_card* t = &h;
	c.techs.add(t);
	c.bank.spies.add(1);
	c.bank.iron.add(2);
	c.resource_abilities.activate(0);
	cout << c.great_people.size();
}
