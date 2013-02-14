// Boolean that defines if a player has a skill or not

#ifndef SKILL_H
#define SKILL_H

class skill
{
	private:

		// The major boolean variable
		bool known;

	public:

		// Constructors
		skill();
		skill(bool b);

		// Sets the boolean variable
		void set(bool b);

		// Returns the boolean variable
		bool get();
}