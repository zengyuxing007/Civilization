//Attribute parent class
#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

class attribute
{
	protected:
		//All attributes have a numeric value
		int amount;

	public:
		//Constructors
		attribute();
		attribute(int initialAmount);

		//Get the numeric representation of attribute
		int get();

		//set function will likely vary a lot in child classes
		void set(int amount);

		//Some children classes will have add() and lose() functions
};
#endif