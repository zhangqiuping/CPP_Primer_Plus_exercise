//¡¶C++ Primer Plus¡·µÚ18ÕÂ ±à³ÌÁ·Ï°1 chapter18.1.cpp
#include <iostream>
#include <initializer_list>

template <class T>
T average_list(std::initializer_list<T> li);

int main()
{
	using namespace std;
	auto q = average_list({ 15.4,10.7,9.0 });
	cout << q << endl;

	cout << average_list({ 20,30,19,17,45,38 }) << endl;

	auto ad = average_list<double>({ 'A',70,65.33 });
	cout << ad << endl;

	return 1;
}

template <class T>
T average_list(std::initializer_list<T> li)
{
	T result=0;
	for (auto x : li)
		result += x;
	result /=li.size();
	return result;
}