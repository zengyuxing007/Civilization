//Horseback Riding

//Play on pickup
void horseback_riding::pickup()
{
	//owner.tech_tree.add(level);
	if (owner.getMS() < 3)
		owner.setMS(3);
}

void horseback_riding::ability()
{
	if (owner.silk.get() >= 1)
	{
		owner.silk.spend(1);
		Player p;
		owner.addTrade(6);
		p.addTrade(9);
	}
}