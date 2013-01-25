//Parent attribute class

attribute::attribute();
{
	amount = 0;
}

attribute::attribute(int a)
{
	amount = a;
}

attribute::set(int a)
{
	if (amount < a)
		amount = a;
}