//¡¶C++ Primer Plus¡·µÚ4ÕÂ ±à³ÌÁ·Ï°2 chapter4.2.cpp
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string name, dessert;
	cout << "Enter your name:" << endl;
	getline(cin, name);
	cout << "Enter your favourite dessert:" << endl;
	getline(cin, dessert);

	cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;

	return 1;
}