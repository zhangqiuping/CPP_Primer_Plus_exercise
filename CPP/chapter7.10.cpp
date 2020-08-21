//¡¶C++ Primer Plus¡·µÚ7ÕÂ ±à³ÌÁ·Ï°10 chapter7.10.cpp

#include <iostream>

double calculate(double x, double y, double func(double,double));
double add(double x, double y);
double minus(double x, double y);
double mal(double x, double y);


int main()
{
	double x, y;
	double (*pf[3])(double, double) = { add,minus,mal };
	std::cout << "Enter two numbers (type none-number to exit):" << "\n";
	while (bool(std::cin >> x >> y))
	{
		//std::cout << " add = " << calculate(x, y, add) << " | minus=" << calculate(x, y, &minus) << "\n";	//Section One
		for (int i = 0; i < 3; i++)
		{
			switch(i)
			{
				case 0:std::cout <<"add: " << calculate(x, y, *(*pf[i])) << " | "; break;
				case 1:std::cout <<"minus: " << calculate(x, y, *(*pf[i])) << " | "; break;
				case 2:std::cout << "mal: " << calculate(x, y, *(*pf[i])) << " | "; break;
			}
		}

		std::cout << "\nEnter two numbers (type none-number to exit):" << "\n";
	}

	return 1;
}

double calculate(double x, double y, double func(double, double))
{
	return func(x, y);
}

double add(double x, double y)
{
	return x + y;
}
double minus(double x, double y)
{
	return x - y;
}
double mal(double x, double y)
{
	return x * y;
}