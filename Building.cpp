#include "Building.h"
#include <iostream>
Building::Building(int maxAge, int initialCost): _maxAge{maxAge}, _initialCost{initialCost}
{
	_id++;
}

int Building::getCost() const
{
	if (_age == 0) {
		return _initialCost;
	}
	if (_age >= _maxAge) {
		return 0;
	}
	
	return _initialCost/_age;
}

void Building::toAge(int years)
{
	_age = years;
	if (_age >= _maxAge) {
		destroy();
	}
}

void Building::destroy()
{
	std::cout << "Building " << _id << " was destroyed\n";
	_id--;
}

int Building::_id{ 0 };