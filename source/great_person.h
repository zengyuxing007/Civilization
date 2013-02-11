#ifndef GREAT_PERSON_H
#define GREAT_PERSON_H

#include <string>

class great_person : public tile
{
	private:
		// The type of great person
		static std::string type;

	public:
		great_person();
		virtual std::string getType();
};
#endif