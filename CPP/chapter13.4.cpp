//¡¶C++ Primer Plus¡·µÚ13ÕÂ ±à³ÌÁ·Ï°4 chapter13.4.cpp
#include <iostream>
#include "port00.h"

using namespace std;

int main()
{
	Port b("Gallo", "tawny", 20);
	VintagePort c("Gallo", 20, "God", 1986);
	cout << "##############CLASS Port##############\n";
	b.Show();
	cout <<"Summary: "<< b << "\n";
	cout << "\n###########CLASS VintagePort##########\n";
	c.Show();
	cout <<"Summary: "<< c << "\n";

	return 1;
}