//¡¶C++ Primer Plus¡·µÚ3ÕÂ ±à³ÌÁ·Ï°4 chapter3.4.cpp

#include <iostream>

const long hours_a_day = 24;
const long minutes_a_hour = 60;
const long seconds_a_minutes = 60;
void show_time(long long _input);

int main()
{
	long long input;
	std::cout << "Enter the number of seconds: ";
	std::cin >> input;
	show_time(input);
	return 1;
}

void show_time(long long _input)
{
	long days, hours, minutes, seconds;
	days = _input / (hours_a_day*minutes_a_hour*seconds_a_minutes);
	hours = _input % (hours_a_day * minutes_a_hour * seconds_a_minutes) / (minutes_a_hour * seconds_a_minutes);
	minutes = _input % (hours_a_day * minutes_a_hour * seconds_a_minutes) % (minutes_a_hour * seconds_a_minutes) / seconds_a_minutes;
	seconds= _input % (hours_a_day * minutes_a_hour * seconds_a_minutes) % (minutes_a_hour * seconds_a_minutes) % seconds_a_minutes;
	std::cout << _input << " seconds = " << days << " days " << hours << " hours " << minutes << " minutes " << seconds << " seconds." << std::endl;
}
