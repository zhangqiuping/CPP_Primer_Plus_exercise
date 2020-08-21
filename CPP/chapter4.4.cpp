//¡¶C++ Primer Plus¡·µÚ4ÕÂ ±à³ÌÁ·Ï°4 chapter4.4.cpp

#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string firstname, lastname;
	cout << "Enter your firstname: ";
	getline(cin, firstname);
	cout << "Enter your lastname: ";
	getline(cin, lastname);

	cout << "Here's the information of a singel string: " << lastname << ", " << firstname;

	return 1;
}