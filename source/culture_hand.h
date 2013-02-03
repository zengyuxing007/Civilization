// Contains a players culture cards
#ifndef CULTURE_HAND_H
#define CULTURE_HAND_H

class civilization;

#include <vector>
#include "culture_card.h"

class culture_hand
{
	private:
		// Array containing cards
		std::vector<culture_card> hand;

		// This points to the guy holding the card
		civilization* owner;

		int hand_size;

	public:
		culture_hand(civilization* owner);
		culture_hand();

		bool add(culture_card card);
};
#endif