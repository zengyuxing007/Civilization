//Contains all information pertaining to a player
#include "Player.h"

//Constructor
Player::Player()
{	
	techs = new tech_tree (*this);
}
