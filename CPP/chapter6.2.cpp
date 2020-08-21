//¡¶C++ Primer Plus¡·µÚ6ÕÂ ±à³ÌÁ·Ï°2 chapter6.2.cpp
#include <iostream>
#include <array>
#include <cctype>

const int n = 10;

int main()
{
	std::array<double, n >  donation{ 0.0};
	double sum=0;
	int i = 0;
	double input;

	std::cout << "Please enter numbers(max 10 times): \n";
	while (i<n)
	{
		if (bool(std::cin >> input))
		{
			donation[i] = input;
			sum += donation[i];
		}
		else
		{
			std::cout << "\nNow you're inputing a non-digit,program will calculation all the numbers you input.\n\n";
			break;
		}
		i++;
	}

	std::cout <<"Input "<<i<< " times, sum is: " << sum << " , average is: " << sum /i<< std::endl;
	return 1;
}