// Types of tickets

//Base template for tech cards
//Default Constructor
tech_card::tech_card()
{
	level = 0;
	ability_phase = "none";
}

//Constructor
tech_card::tech_card(int l, /*Bank &b, Icon i,*/string &a)
{
	bank = b;
	level = l;
	// icon = i;
	ability_phase = a;
}

int tech_card::getLevel()
{
	return level;
}
//Function to play on pickup
void tech_card::pickup()
{
	//p.tech_tree.add(level);
}
};





