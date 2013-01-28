//Army source file

#include "army.h"
#include "unit.h"
#include <vector>

army::army()
{
}

army::army(civilization * o)
{
	owner = o;
}

void army::addUnit(unit u)
{
	units.push_back(u);
}