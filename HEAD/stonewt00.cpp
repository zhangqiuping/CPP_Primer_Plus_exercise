//stonewt00.cpp for chapter11.5.cpp
#include <iostream>
#include "stonewt00.h"

using std::cout;

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn;
	pounds = lbs;
	mode = float_POUNDS;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	mode = STONE;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{
}

void Stonewt::set_stone()
{
	stone = int(pounds) / Lbs_per_stn;
	pds_left = int(pounds) % Lbs_per_stn;
}

void Stonewt::set_pounds()
{
	pounds = stone * Lbs_per_stn + pds_left;
}

Stonewt Stonewt::operator+(const Stonewt& st1)const
{
	Stonewt sum;
	sum.pounds = pounds + st1.pounds;
	sum.set_stone();
	return sum;
}

Stonewt Stonewt::operator-(const Stonewt& st1)const
{
	Stonewt diff;
	diff.pounds = pounds - st1.pounds;
	diff.set_stone();
	return diff;
}

Stonewt Stonewt::operator*(double mult)const
{
	Stonewt result;
	result.pounds = mult * pounds;
	result.set_pounds();
	return result;
}

Stonewt operator*(double mult, Stonewt& st1)
{
	return st1 * mult;
}

std::ostream& operator<<(std::ostream& os, Stonewt& st1)
{
	if (st1.mode == Stonewt::STONE)
		os << "STONE Mode: " << st1.stone << "Stones and " << st1.pds_left << " pounds left.";
	else if (st1.mode == Stonewt::int_POUNDS)
		os << "int_Pounds Mode: " << int(st1.pounds) << " Pounds.";
	else if (st1.mode == Stonewt::float_POUNDS)
		os << "float_Pounds Mode: " << st1.pounds << " Pounds.";
	else
		os << "Wrong Mode";
	return os;

}

void Stonewt::set_Mode(Mode form)
{
	mode = form;
}

/*
void Stonewt::show_stn()const
{
	cout << stone << " stone£¬" << pds_left << " pounds\n";
}
*/

/*
void Stonewt::show_lbs()const
{
	cout << pounds << " pounds\n";
}
*/