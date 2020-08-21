//¡¶C++ Primer Plus¡·µÚ5ÕÂ ±à³ÌÁ·Ï°1 chapter5.1.cpp
#include <iostream>

int main()
{
	int a, b,sum=0;
	std::cout << "Enter the first integer: ";
	std::cin >> a;
	std::cout << "Enter the last integer: ";
	std::cin >> b;

	for (int i = a; i <= b; i++)
	{
		sum += i;
	}
	
	std::cout << "the sum from " << a << " to " << b << " is " << sum<<".\n";

	return 1;
}