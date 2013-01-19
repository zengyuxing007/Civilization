// Types of tickets
class tech_card
{
	private:
		int level;
		Background background();
		Icon icon();
		String ability;
	public:
		tech_card()
		{
			level = 0;
			ability = none;
		}
		
		tech_card(int l, Icon i, String a)
		{
			level = l;
			icon = i;
			ability = a;
		}
		tech_card(int l, Icon i)
		{
			level = l;
			icon = i;
		}

		pickup(Player p)
		{
			p.tech_tree.add(level);
		}
}