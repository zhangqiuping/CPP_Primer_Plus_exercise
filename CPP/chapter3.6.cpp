//¡¶C++ Primer Plus¡·µÚ3ÕÂ ±à³ÌÁ·Ï°6 chapter3.6.cpp

#include <iostream>

int main()
{
	float distance, fuel,consumption;
	std::cout << "Enter how many distances you drive(Kilometers): ";
	std::cin >> distance;
	std::cout << "Enter how much fuel you use(Liter): ";
	std::cin >>fuel;
	consumption = fuel / distance * 100;
	std::cout << "Your fuel consumption is " << consumption << " Liter pro 100 kilometers." << std::endl;
	return 1;
}