//¡¶C++ Primer Plus¡·µÚ4ÕÂ ±à³ÌÁ·Ï°7 chapter4.7.cpp

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
	Pizza favouritepizza;
	cout << "Welcome to William Wingate Pizza Analyze Service Copyright@2020!" << endl;
	cout << "Enter your favourite pizza band: ";
	getline(cin, favouritepizza.band);
	cout << "Enter the diameter of your favourite pizza: ";
	cin >> favouritepizza.diameter;
	cout << "Enter the weight of your favourite pizza: ";
	cin >> favouritepizza.weight;

	cout << "Wow, your favourite pizza band is " << favouritepizza.band << ", the diamter is " << favouritepizza.diameter << ", the weight is " << favouritepizza.weight << ". " << endl;

	return 1;
}