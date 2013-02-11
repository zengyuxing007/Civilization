// Great person class

#include "figure.h"
#include "great_person.h"
#include "resource.h"
#include <string>

std::string great_person::type = "great person";

great_person::great_person()
{
	discovered = false;
	army = NULL;
}

std::string great_person::getType()
{
	return type;
}
