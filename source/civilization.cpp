//Contains all information pertaining to a player
#include "civilization.h"
#include "resource_bank.h"
#include "attributes.h"
#include "culture_hand.h"
#include "tech_tree.h"
#include "city.h"
#include "culture_hand.h"
#include "great_person.h"

using namespace std;	

//Constructor
civilization::civilization()
{	
	culture_cards = culture_hand(this);
	techs = tech_tree(this);
}

// Adds a great person to your array
void civilization::addGreatPerson()
{
	great_people.push_back(great_person());
}