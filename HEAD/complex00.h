//complex00.h for chapter11.7
#ifndef COMPLEX00_H_
#define COMPLEX00_H_

#include <iostream>

class Complex00
{
private:
	double m_real;
	double m_imaginary;
public:
	Complex00();
	Complex00(double real, double imaginary);
	~Complex00() {};
	Complex00 operator+(const Complex00 &c1)const;
	Complex00 operator-(const Complex00& c1)const;
	Complex00 operator*(const Complex00& c1)const;
	Complex00 operator*(double x)const;
	Complex00 operator~()const;

	friend Complex00 operator*(double x, const Complex00& c1);
	friend std::ostream& operator<<(std::ostream& os, const Complex00& c1);
	friend std::istream& operator>>(std::istream& is,  Complex00& c1);

};




#endif