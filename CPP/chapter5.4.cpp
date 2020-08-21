//¡¶C++ Primer Plus¡·µÚ5ÕÂ ±à³ÌÁ·Ï°4 chapter5.4.cpp

#include <iostream>
#include <cmath>

const double initial_invest = 100.0;
const double simple_interest = 0.1;
const double compound_interest = 0.05;

int main()
{
	int years = 0;
	double simple_sum = 0, compound_sum = 0;
	while (simple_sum >= compound_sum)
	{
		years++;
		simple_sum = initial_invest + initial_invest * simple_interest * years;
		compound_sum = initial_invest * pow((1.0 + compound_interest),  years);

		std::cout << years << " years, Daphne gets " << simple_sum << ". while Cleo gets " << compound_sum << ".\n";
	}

	std::cout << "In " << years << " years, Principal and interest of Cleo is " << compound_sum << ", Principal and interest of Daphne is " << simple_sum << ".\n";

	return 1;
}
