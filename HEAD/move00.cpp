#include <iostream>
#include "move00.h"

using std::cout;

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove()const
{
	cout << "x=" << x << "\n";
	cout << "y=" << y << "\n";
}

Move Move::addmove(const Move& m)const
{
	Move m2;
	m2.x=x+m.x;
	m2.y=y+ m.y;
	return m2;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}