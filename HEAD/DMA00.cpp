#include<iostream>
#include"DMA00.h"

abcDMA::abcDMA(const char* l, int r) 
{
	label = new char[strlen(l) + 1];
	strcpy_s(label, strlen(l) + 1, l);
	rating = r;
}

abcDMA::abcDMA(const abcDMA& rs)
{
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
}

abcDMA::~abcDMA()
{
	delete[] label;
}

abcDMA& abcDMA::operator=(const abcDMA& rs)
{
	if (this == &rs)
		return *this;
	delete[] label;
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const abcDMA& rs)
{
	os << "Label=" << rs.get_label() << " | rating=" << rs.get_rating();
	return os;
}

baseDMA::baseDMA(const char* l,int r):abcDMA(l,r)
{}

baseDMA::baseDMA(const baseDMA& rs) : abcDMA(rs)
{}

baseDMA::~baseDMA()
{}

baseDMA& baseDMA::operator=(const baseDMA& rs)
{
	abcDMA::operator=(rs);
	return *this;
}

std::ostream& operator<<(std::ostream& os,const baseDMA& rs)
{
	os << "label=" << rs.get_label() << " | rating=" << rs.get_rating();
	return os;
}

lacksDMA::lacksDMA(const char* c, const char* l, int r) :abcDMA(l, r)
{
	strcpy_s(color, c);
}

lacksDMA::lacksDMA(const lacksDMA& rs) : abcDMA(rs)
{
	strcpy_s(color, rs.color);
}

hasDMA::hasDMA(const char* s, const char* l, int r) : abcDMA(l, r)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}

hasDMA::hasDMA(const char* s, const abcDMA& rs) :abcDMA(rs)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}

hasDMA::hasDMA(const hasDMA& rs):abcDMA(rs)
{
	style = new char[strlen(rs.style) + 1];
	strcpy_s(style, strlen(rs.style) + 1, rs.style);
}


hasDMA::~hasDMA()
{
	delete[] style;
}

hasDMA& hasDMA::operator=(const hasDMA& rs)
{
	if (this == &rs)
		return *this;

	abcDMA::operator=(rs);
	delete[] style;
	style = new char[strlen(rs.style) + 1];
	strcpy_s(style, strlen(rs.style) + 1, rs.style);
	return *this;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& rs)
{
	os << (const abcDMA&)rs;
	os << " | style=" << rs.style;
	return os;
}
