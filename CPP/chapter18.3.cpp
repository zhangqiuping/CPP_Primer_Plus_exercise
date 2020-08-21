//¡¶C++ Primer Plus¡·µÚ18ÕÂ ±à³ÌÁ·Ï°3 chapter18.3.cpp
#include <iostream>

template <typename T, typename... Args>
long double sum_value(const T &value, const Args&... args);

template <typename T>
long double sum_value(const T& value);


int main()
{
	long double result = 0.0;
	result = sum_value(13.23, 'a', 32.2,323.34, 123.413, 4123.43);
	std::cout << result<<std::endl;
	return 1;
}

template <typename T, typename... Args>
long double sum_value(const T &value, const Args&... args)
{
	return value + sum_value(args...);
}

template <typename T>
long double sum_value(const T& value)
{
	return value;
}

