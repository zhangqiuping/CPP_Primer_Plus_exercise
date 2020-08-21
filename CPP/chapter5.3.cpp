//¡¶C++ Primer Plus¡·µÚ5ÕÂ ±à³ÌÁ·Ï°3 chapter5.3.cpp

#include <iostream>

int main()
{
	double a, sum=0;
	std::cout << "Please enter the number(enter 0 to exit): ";
	std::cin >> a;
	while (a != 0)
	{
		sum += a;
		std::cout << "Until now, the sum of the numbers which you input is: " << sum << ".\n";
		std::cout << "Please enter the number(enter 0 to exit): ";
		std::cin >> a;
	}
	return 1;
}