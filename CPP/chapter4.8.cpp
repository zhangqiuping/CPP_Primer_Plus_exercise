//¡¶C++ Primer Plus¡·µÚ4ÕÂ ±à³ÌÁ·Ï°8 chapter4.8.cpp

#include <iostream>
#include <string>
using namespace std;

struct Pizza
{
	std::string band;
	double diameter;
	double weight;
};

int main()
{
	using namespace std;
	Pizza* favourite = new Pizza;
	cout << "Enter the diameter of your favourite pizza: ";
	cin >> favourite->diameter;
	cin.get();
	cout << "Enter your favourite pizza band: ";
	getline(cin, favourite->band);
	cout << "Enter the weight of your favourite pizza: ";
	cin >> favourite->weight;

	cout << "Wow, your favourite pizza band is " << favourite->band << ". The diameter of pizza is " << favourite->diameter << ". The weight of pizza is " << favourite->weight << endl;

	return 1;
}
	