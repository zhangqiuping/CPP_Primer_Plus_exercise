//¡¶C++ Primer Plus¡·µÚ4ÕÂ ±à³ÌÁ·Ï°6 chapter4.6.cpp

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
	Candybar snacks[3]{ {"Mocha Munch",3.5,250},{"Latte Coffee",2.5,450},{"Schockladen",2.1,780} };
	for (int i = 0; i < 3; i++)
	{
		std::cout << i+1 << ". " << snacks[i].band << " Weight: " << snacks[i].weight << "kg Calorie: " << snacks[i].cal <<" Cal"<< std::endl;
	}

	return 1;
}