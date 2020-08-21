//¡¶C++ Primer Plus¡·µÚ7ÕÂ ±à³ÌÁ·Ï°5 chapter7.5.cpp

#include <iostream>

long factorial(unsigned int n);

int main()
{
	int n;
	std::cout << "Enter a factorial number(q to exit):\n";
	
	while (std::cin >> n)
	{
		std::cout << n << "!=" << factorial(n) << "\n";
	}
	return 1;
}

long factorial(unsigned int n)
{
	if (n == 0)
		return 1;
	if (n > 0)
		return n * factorial(n - 1);
}