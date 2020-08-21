//¡¶C++ Primer Plus¡·µÚ5ÕÂ ±à³ÌÁ·Ï°7 chapter5.7.cpp

#include <iostream>
#include <string>

struct car
{
	std::string manufacturer;
	int year;
};

int main()
{
	using namespace std;
	int number;
	cout << "How many cars do you want to catalog?";
	cin >> number;
	cin.get();
	car* data = new car[number];

	for (int i = 0; i < number; i++)
	{
		cout << "Car #" << i + 1 << ":\n";
		cout << "Please enter the mark: ";
		getline(cin,(data+i)->manufacturer);
		cout << "Please enter the year made: ";
		cin >> (data + i)->year;
		cin.get();
	}

	cout << endl;
	cout << "Here is your collection:\n";
	for (int i = 0; i < number; i++)
	{
		cout << (data + i)->year << " " << (data + i)->manufacturer << endl;
	}

	return 1;
}