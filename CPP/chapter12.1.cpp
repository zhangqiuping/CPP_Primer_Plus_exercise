//¡¶C++ Primer Plus¡·µÚ12ÕÂ ±à³ÌÁ·Ï°1 chapter12.1.cpp
#include <iostream>
#include "cow00.h"

int main()
{
	Cow00 a;
	Cow00 b("Nina", "Draw", 21.2);
	a.ShowCow();
	b.ShowCow();
	a = b;
	std::cout << "\nCopy b to a:\n";
	a.ShowCow();
	b.ShowCow();
	std::cout << "\n";
	
	return 1;
}