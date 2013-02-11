// Unit parent class unit
#ifndef UNIT_H
#define UNIT_H

class unit
{
	private:
		// A temporary strength increase
		int temp_strength;

		// The upgrade level of the unit
		int rank;

		// The original strength of the unit
		int base_strength;

		// The attack strength of the unit at its current level
		int strength;

		static const int MAX_RANK = 4;
	public:
		unit();

		// unit(base_strength);
		unit(int base_strength, int rank);

		void upgrade(int rank);

		void addTemp(int amount);

		int getStrength();
};
#endif