// City source file

#include <vector>
#include "resource.h"
#include "city.h"

city::city()
{
	collect();
}

void city::collect()
{
	trade = 0;
	gold = 0;
	culture = 0;
	production = 0;
	farms = std::vector<resource>();

	for (int i = 0; i < outskirts.size(); i++)
	{

	}
}