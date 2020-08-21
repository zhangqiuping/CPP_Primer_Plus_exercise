//¡¶C++ Primer Plus¡·µÚ11ÕÂ ±à³ÌÁ·Ï°5 chapter11.5.cpp
#include <iostream>
#include"stonewt00.h"

void display(Stonewt& st1, int n);

int main()
{
	using std::cout;
	using std::endl;
	Stonewt incognito = 275;
	Stonewt wolfe(285.7);
	Stonewt taft(21, 8);

	cout << "The celebrity weighed " << incognito << endl;
	cout << "The detective weighed " << wolfe << endl;
	taft.set_Mode(Stonewt::STONE);
	cout << "The President weighed " << taft << endl;

	incognito = 276.8;
	taft = 325;
	cout << "After dinner, the celebrity weighed " << incognito << endl;
	cout << "After dinner, the President weighed " << taft << endl;
	taft.set_Mode(Stonewt::float_POUNDS);
	display(taft, 3);

	return 1;
}

void display(Stonewt& st1, int n)
{
	for (int i = 0; i < n; i++)
		std::cout << st1 << std::endl;
}