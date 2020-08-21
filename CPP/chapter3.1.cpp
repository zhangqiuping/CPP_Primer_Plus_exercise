//¡¶C++ Primer Plus¡·µÚ3ÕÂ ±à³ÌÁ·Ï°1 chapter3.1.cpp

#include <iostream>

const int factor = 12;
void inch_to_feet(int _fInch);

int main()
{
	int inch;
	std::cout << "\aEnter your height wiht inch:______\b\b\b\b\b";
	std::cin >> inch;
	inch_to_feet(inch);
	return 1;
}
void inch_to_feet(int _fInch)
{
	int feet = _fInch / factor;
	_fInch -= feet * 12;
	std::cout << "Your height is " << feet << " feet and " << _fInch <<" inches!"<<std::endl;
}
