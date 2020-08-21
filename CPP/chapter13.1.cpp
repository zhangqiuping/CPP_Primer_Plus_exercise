//¡¶C++ Primer Plus¡·µÚ13ÕÂ ±à³ÌÁ·Ï°1 chapter13.1.cpp
#include <iostream>
#include "cd00.h"

using namespace std;
void Bravo(const Cd& disk);

int main()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2("Piano Sonta in B flat,Fantaisa in C", "Alfred Brendel", "Philips", 2, 57.17);
	Cd* pcd = &c1;
	cout << "\nUsing object directly:\n";
	c1.Report();
	c2.Report();

	cout << "\nUsing type Cd* pointer to objects:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();
	cout << "\nCalling a function with a cd reference argument:\n";
	Bravo(c1);
	Bravo(c2);

	cout << "\nTesting assigment:\n ";
	Classic copy;
	copy = c2;
	copy.Report();
	return 1;
}

void Bravo(const Cd& disk)
{
	disk.Report();
}