//vector01.cpp for chapter11.2.cpp
#include <iostream>
#include "vector01.h"
#include <cmath>

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
	const double RAD_to_deg = 45.0 / atan(1.0);
	/*void Vector::set_mag()
	{
		mag = sqrt(x * x + y * y);
	}*/

	double Vector::magval()const
	{
		double mag = 0.0;
		mag = sqrt(x * x + y * y);
		return mag;
	}

	double Vector::angval()const
	{
		{
			double ang;
			if (x == 0.0 && y == 0.0)
				ang == 0.0;
			else
				ang = atan2(y, x);
			return ang;
		}
	}

/*	void Vector::set_ang()
	{
		if (x == 0.0 && y == 0.0)
			ang == 0.0;
		else
			ang = atan2(y, x);
	}*/

	void Vector::set_x(double mag, double ang)
	{
		x = mag * cos(ang);
	}

	void Vector::set_y(double mag, double ang)
	{
		y = mag * sin(ang);
	}

	Vector::Vector()
	{
		x = y =/* mag = ang =*/ 0.0;
		mode = RECT;
	}
	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			//set_mag();
			//set_ang();
		}
		else if (form == POL)
		{
			//mag = n1;
			//ang = n2;
			set_x(n1,n2);
			set_y(n1,n2);
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector()--";
			cout << "Vector set to 0\n";
			x = y /*= mag = ang */= 0.0;
			mode = RECT;
		}
	}
	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			//set_mag();
			//set_ang();
		}
		else if (form == POL)
		{
			//mag = n1;
			//ang = n2;
			set_x(n1,n2);
			set_y(n1,n2);
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() -- ";
			cout << "Vector set to 0\n";
			x = y /*= mag = ang*/ = 0.0;
			mode = RECT;
		}
	}

	Vector::~Vector()
	{
	}

	void Vector::polar_mode()
	{
		mode = POL;
	}

	void Vector::rect_mode()
	{
		mode = RECT;
	}

	Vector Vector::operator+(const Vector& b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	Vector Vector::operator-(const Vector& b) const
	{
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator- () const
	{
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}

	Vector operator* (double n, const Vector& a)
	{
		return a * n;
	}

	std::ostream& operator<< (std::ostream& os, const Vector& v)
	{
		if (v.mode == Vector::RECT)
			os << "(x,y)=(" << v.x << ", " << v.y << ")";
		else if (v.mode == Vector::POL)
		{
			os << "(m,a) = (" << v.magval()<< ", " << v.angval() << ")";
		}
		else
		{
			os << "Vector object mode is invaild";
		}
		return os;
	}
}