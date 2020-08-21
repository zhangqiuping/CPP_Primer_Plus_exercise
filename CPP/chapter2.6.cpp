//¡¶C++ Primer Plus¡·µÚ2ÕÂ ±à³ÌÁ·Ï°6 chapter2.6.cpp

#include <iostream>

double lightyears_to_astronomicalunits(double _dLightyears);

int main()
{
	double lightyears, astronomicalunits;
	std::cout << "Enter the number of light years: ";
	std::cin >> lightyears;
	astronomicalunits = lightyears_to_astronomicalunits(lightyears);
	std::cout << "\n" << lightyears << " light years = " << astronomicalunits << " astronomical units." << std::endl;
	return 1;
}

double lightyears_to_astronomicalunits(double _dLightyears)
{
	return _dLightyears * 63240;
}