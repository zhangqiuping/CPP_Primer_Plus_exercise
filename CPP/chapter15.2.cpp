//¡¶C++ Primer Plus¡·µÚ15ÕÂ ±à³ÌÁ·Ï°2 chapter15.2.cpp
#include <iostream>
#include <cmath>
#include "exc_mean.h"

double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;

	cout << "Enter two numbers:";
	while (cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << ", " << y << " is " << z << endl;
			cout << "Geometric mean of " << x << ", " << y << " is " << gmean(x, y) << endl;
			cout << "Enter next set of numbers<q to quit>:";
		}
		catch (bad_hmean& bh1)
		{
			bh1.mesg();
			cout << bh1.what();
			cout << "invaild argument: a==(-b£¬break£©" << "\n";

		}
		catch (bad_gmean& bg1)
		{
			bg1.mesg();
			cout << bg1.what();
			cout << "invaild argument: v1=a<0||b<0\n";

		}
		catch (std::logic_error& le)
		{
			bad_gmean  *bg=0;
			bad_hmean* bh=0;
		/*	if (bg == dynamic_cast<bad_gmean*> (le))
			{
				std::cout << le->what(); 
				cout << "111";
				break;
			}
			if (bh == dynamic_cast<bad_hmean*>(le))
			{
				std::cout << le->what();
				cout << "222";
				break;
			}
			else
				break;*/
		}

	}
	cout << "Bye!\n";
	return 1;
}

double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}
double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a * b);
}
