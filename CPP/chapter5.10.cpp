//¡¶C++ Primer Plus¡·µÚ5ÕÂ ±à³ÌÁ·Ï°10 chapter5.10.cpp
#include <iostream>

int main()
{
	int rows = 0;
	std::cout << "Enter number of lows:";
	std::cin >> rows;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (j < (rows - i-1)) std::cout << ".";
			if (j >= (rows - i-1)) std::cout << "*";
		}
		std::cout << std::endl;
	}
	return 1;
}