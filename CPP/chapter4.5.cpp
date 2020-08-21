//¡¶C++ Primer Plus¡·µÚ4ÕÂ ±à³ÌÁ·Ï°5 chapter4.5.cpp
#include <iostream>
#include <string>

struct Candybar
{
	std::string band;
	double weight;
	int cal;
};

int main()
{
	Candybar snack{ "Mocha Munch",2.3,350 };

	std::cout << "Band of snack: " << snack.band << std::endl;
	std::cout << "Weight of snack: " << snack.weight << std::endl;
	std::cout << "Calorie of snack: " << snack.cal << std::endl;

	return 1;
}