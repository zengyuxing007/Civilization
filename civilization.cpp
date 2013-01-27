//Contains all information pertaining to a player
#include "civilization.h"
#include "resource_bank.h"
#include "attributes.h"

using namespace std;

//Constructor
civilization::civilization()
{	
	tech_tree t(this);
	techs = t;
}
