// Culture card class
#ifndef CULTURE_CARD_H
#define CULTURE_CARD_H

class civilization;

class culture_card
{
	private:
		// Player who owns the card
		civilization* owner;

	public:
		culture_card();
		culture_card(civilization* owner);

		// Activates when card is played
		void ability();
};
#endif