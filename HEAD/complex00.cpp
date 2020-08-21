//complex00.cpp for chapter11.7
#include<iostream>
#include"complex00.h"

Complex00::Complex00()
{
	m_real = 0.0;
	m_imaginary = 0.0;
}

Complex00::Complex00(double real, double imaginary)
{
	m_real = real;
	m_imaginary = imaginary;
}

Complex00 Complex00::operator+(const Complex00& c1)const
{
	Complex00 sum;
	sum.m_real = m_real + c1.m_real;
	sum.m_imaginary = m_imaginary + c1.m_imaginary;
	return sum;
}

Complex00 Complex00::operator-(const Complex00& c1)const
{
	Complex00 diff;
	diff.m_real = m_real - c1.m_real;
	diff.m_imaginary = m_imaginary - c1.m_imaginary;
	return diff;
}

Complex00 Complex00::operator*(const Complex00& c1)const
{
	Complex00 result;
	result.m_real = m_real * c1.m_real - m_imaginary * c1.m_imaginary;
	result.m_imaginary = m_real * c1.m_imaginary + m_imaginary * c1.m_real;
	return result;
}

Complex00 Complex00::operator*(double x)const
{
	Complex00 result;
	result.m_real = m_real * x;
	result.m_imaginary = m_imaginary * x;
	return result;
}

Complex00 Complex00::operator~()const
{
	Complex00 result;
	result.m_real = -m_real;
	result.m_imaginary = -m_imaginary;
	return result;
}

Complex00 operator*(double x, const Complex00& c1)
{
	return c1 * x;
}

std::ostream& operator<<(std::ostream& os, const Complex00& c1)
{
	os << "(" << c1.m_real << ", " << c1.m_imaginary << "i)";
	return os;
}

std::istream& operator>>(std::istream& is, Complex00& c1)
{
	std::cout << "real: ";
	is >> c1.m_real;
	std::cout << "imaginary: ";
	is >> c1.m_imaginary;
	return is;
}

