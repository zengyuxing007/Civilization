//The resources in a owned by a player
class resource
{
	private:
		int quanity;
	public:
		//Constructor
		resource()
		{
			quanity = 0;
		}
		resource(int x)
		{
			if (x >= 0)
				quanity = x;
			else
				quanity = 0;
		}
		int get()
		{
			return quanity;
		}
		int add(int a)
		{
			 quanity += a;
		}
		int spend(int a)
		{
			quanity -= a;
		}
};