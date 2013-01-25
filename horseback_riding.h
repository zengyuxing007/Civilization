#ifndef HORSEBACK_RIDING_H
#define HORSEBACK_RIDING_H

//Horseback Riding
class horseback_riding:tech_card
{
	public:

		//Play on pickup
		void pickup();
		//Active ability. Will take in a player and affect them. Also needs to check the phase.
		void ability();
};
#endif