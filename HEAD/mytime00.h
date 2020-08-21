//mytime00.h for chapter11.1.cpp
#ifndef MYTIME00_H_
#define MYTIME00_H_

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h=0, int m=0);
	friend Time operator+ (const Time&time1, const Time& time2);
	friend Time operator- (const Time& time1, const Time& time2);
	friend Time operator* (const Time& time1,double  n);
	friend Time operator*(double n, const Time& t) { return t * n; }
	friend std::ostream & operator<<(std::ostream& os, const Time& t);
	//void Show()const;
};
#endif