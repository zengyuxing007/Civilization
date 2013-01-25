//The resources in a owned by a player
//Constructor
Player::resource()
{
	quanity = 0;
}
Player::resource(int initial)
{
	if (initial >= 0)
		quanity = initial;
	else
		quanity = 0;
}
int Player::get()
{
	return quanity;
}
int Player::add(int a)
{
	 quanity += a;
}
int Player::spend(int a)
{
	quanity -= a;
}