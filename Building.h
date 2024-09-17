#pragma once
class Building
{
	static int _id;
	int _maxAge{};
	int _initialCost{};
	int _age{};
	void destroy();

public:
	Building() = delete;
	Building(int maxAge, int initialCost);
	int getCost() const;
	void toAge(int years);

};

