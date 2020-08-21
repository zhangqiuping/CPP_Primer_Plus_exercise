//port00.cpp for chapter13.4.cpp

#include<iostream>
#include"port00.h"

Port::Port(const char* br, const char* st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy_s(brand, strlen(br) + 1, br);
	strcpy_s(style, st);
	bottles = b;
}

Port::Port(const Port& p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy_s(brand, strlen(p.brand) + 1, p.brand);
	strcpy_s(style,20, p.style);
	bottles = p.bottles;
}

Port& Port::operator=(const Port& p)
{
	if (this == &p)
		return*this;
	delete[] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy_s(brand, strlen(p.brand) + 1, p.brand);
	strcpy_s(style,20, p.style);
	return *this;
}

Port& Port::operator+=(int b)
{
	if (b < 0)
	{
		cout << "bottles can't be negative. The operation is terminated.\n";
		return *this;
	}
	bottles += b;
	return *this;
}

Port& Port::operator-=(int b)
{
	if (b < 0)
	{
		cout << "bottles can't be negative. The operation is terminated.\n";
		return *this;
	}
	bottles -= b;
	return *this;
}

void Port::Show()const
{
	cout << "Band: " << brand<<"\n";
	cout << "Kind: " << style << "\n";
	cout << "Bottles: " << bottles << "\n";
}

std::ostream& operator<<(std::ostream& os, const Port& p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

VintagePort::VintagePort():Port()
{
	nickname = new char[2];
	strcpy_s(nickname, 2, "");
	year = 0;
}

VintagePort::VintagePort(const char* br, int b, const char* nn, int y):Port(br,"Vintage", b)
{
	nickname = new char[strlen(nn) + 1];
	strcpy_s(nickname, strlen(nn) + 1, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort& vp):Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy_s(nickname, strlen(vp.nickname) + 1, vp.nickname);
	year = vp.year;
}

VintagePort& VintagePort::operator=(const VintagePort& vp)
{
	if (this == &vp)
		return *this;
	Port::operator=(vp);
	delete[] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy_s(nickname, strlen(vp.nickname) + 1, vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::Show()const
{
	((Port)(*this)).Show();
	cout << "Nickname: " << nickname<<"\n";
	cout << "Year: " << year << "\n";
}

ostream& operator<<(ostream& os, const VintagePort& vp)
{
	os << (const Port&)vp;
	os << ", " << vp.nickname << ", " << vp.year;
	return os;
}


