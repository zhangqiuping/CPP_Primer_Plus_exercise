//¡¶C++ Primer Plus¡·µÚ10ÕÂ ±à³ÌÁ·Ï°6 chapter10.6.cpp
#include <iostream>
#include"move00.h"

using std::cout;
using std::cin;

int main()
{
	double a, b;
	Move m1, m2;
	cout << "++++++++++++++++++++++++++++++++++++ShowMove++++++++++++++++++++++++++++++++++++\n";
	m1.showmove();
	m2.showmove();
	cout << "++++++++++++++++++++++++++++++++++++ResetMove+++++++++++++++++++++++++++++++++++\n";
	cout << "Input Move m1.x: \n";
	cin >> a;
	cout << "Input Move m1.y: \n";
	cin >> b;
	m1.reset(a, b);
	cout << "Input Move m2.x: \n";
	cin >> a;
	cout << "Input Move m2.y: \n";
	cin >> b;
	m2.reset(a, b);
	m1.showmove();
	m2.showmove();
	cout << "++++++++++++++++++++++++++++++++++++AddMove++++++++++++++++++++++++++++++++++++++\n";
	m2=m2.addmove(m1);
	m1.showmove();
	m2.showmove();
	return 1;
}