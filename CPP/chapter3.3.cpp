//¡¶C++ Primer Plus¡·µÚ3ÕÂ ±à³ÌÁ·Ï°3 chapter3.3.cpp
#include <iostream>

void show_latitude(float degree, float minutes, float seconds);

int main()
{
	float degrees, minutes, seconds;
	std::cout << "Enter a latitude in degrees, minutes,seconds:" << std::endl;
	std::cout << "First, enter the degrees: ";
	std::cin >> degrees;
	std::cout << "Next, enter the minutes:";
	std::cin >> minutes;
	std::cout << "Finally, enter the seconds:";
	std::cin >> seconds;
	show_latitude(degrees, minutes, seconds);
	return 1;
}

void show_latitude(float _degrees, float _minutes, float _seconds)
{
	float _latitude = _degrees + (_minutes + _seconds /60 ) / 60;
	std::cout << _degrees << " degrees, " << _minutes << " minutes, " << _seconds << " seconds = " << _latitude << " degrees." << std::endl;
}