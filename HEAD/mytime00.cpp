#include <iostream>
#include "mytime00.h"

Time::Time()
{
	hours = 0;
	minutes = 0;
}

Time::Time(int h, int m )
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours=hours+minutes / 60;
	minutes = minutes % 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time operator+(const Time& time1, const Time& time2)
{
	Time sum;
	sum.minutes = time1.minutes + time2.minutes;
	sum.hours = time1.hours+time2.hours+sum.minutes / 60;
	sum.minutes =  sum.minutes % 60;
	return sum;
}

Time operator-(const Time& time1, const Time& time2)
{
	Time diff;
	int tot1, tot2;
	tot1 = time1.minutes + time1.hours*60;
	tot2 = time2.minutes + time2.hours * 60;
	diff.hours = (tot2-tot1) / 60;
	diff.minutes = (tot2-tot1) % 60;
	return diff;
}

Time operator*(const Time& time1, double mult)
{
	Time result;
	long totalminutes = time1.hours * mult * 60 + time1.minutes * mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

std::ostream &operator<<(std::ostream& os, const Time& t)
{
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}


/*void Time::Show()const
{
	std::cout << hours << " hours, " << minutes << " minutes. \n";
}*/
