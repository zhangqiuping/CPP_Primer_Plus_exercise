//¡¶C++ Primer Plus¡·µÚ4ÕÂ ±à³ÌÁ·Ï°9 chapter4.9.cpp

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
	Candybar* snacks = new Candybar[3];

	*snacks = { "Mocha Munch",3.5,250 };
	*(snacks + 1) = { "Latte Coffee",2.5,450 };
	*(snacks + 2) = { "Schockladen",2.1,780 };

	for (int i = 0; i < 3; i++)
	{
		std::cout << i + 1 << ". " << (snacks+i)->band << " Weight: " << (snacks + i)->weight << "kg Calorie: " << (snacks + i)->cal << " Cal" << std::endl;
	}

	delete[] snacks;
	return 1;
}