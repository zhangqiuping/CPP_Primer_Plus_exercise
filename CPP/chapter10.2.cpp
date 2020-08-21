//¡¶C++ Primer Plus¡·µÚ10ÕÂ ±à³ÌÁ·Ï°2 chapter10.2.cpp

#include <iostream>
#include "person00.h"

int main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwidddy", "Sam");

	std::cout << "############ONE##########\n";
	one.show();
	one.Fomalshow();
	std::cout << "############TWO##########\n";
	two.show();
	two.Fomalshow();
	std::cout << "###########THREE#########\n";
	three.show();
	three.Fomalshow();
	return 1;
}