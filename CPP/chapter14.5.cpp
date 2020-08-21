//¡¶C++ Primer Plus¡·µÚ14ÕÂ ±à³ÌÁ·Ï°5 chapter14.5.cpp
#include <iostream>
#include "emp.h"

using namespace std;

int main()
{
	employee em("Trip", "Harris", "Thumper");
	cout << em << endl;
	em.ShowAll();
	cout << "\n";

	manager ma("Amorphia", "Spindragon", "Nuancer", 5);
	cout << ma << endl;
	ma.ShowAll();
	cout << "\n";

	fink fi("Aatt","Oggs", "Oiler", "Juno Barr");
	cout << fi << endl;
	fi.ShowAll();
	cout << "\n";

	highfink hf(ma, "Curly Kew");
	cout << hf << endl;
	hf.ShowAll();
	cout << "\n";

	cout << "Press a key for next phase:";
	cin.get();
	cin.get();
	highfink hf2;
	hf2.SetAll();
	cout << "\n";
	cout << "Using an abstr_emp * pointer:\n";
	abstr_emp* tri[4] = { &em,&fi,&hf,&hf2 };
	for (int i = 0; i < 4; i++)
	{
		tri[i]->ShowAll();
	}
	return 1;
}