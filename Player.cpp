//Contains all information pertaining to a player
class Player
{
	private:
		Bank bank;
		int move_speed;
		int city_limit;
	public:
		//All possible resources
		TechTree tech_tree;
	
		//Constructor
		Player()
		{
			move_speed = 2;
			city_limit = 2;
		}

		int getMS()
		{
			return move_speed;
		}

		void setMS(int x)
		{
			move_speed = x;
		}
};