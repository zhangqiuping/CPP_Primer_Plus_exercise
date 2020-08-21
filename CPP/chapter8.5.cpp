//¡¶C++ Primer Plus¡·µÚ8ÕÂ ±à³ÌÁ·Ï°5 chapter8.5.cpp

#include <iostream>
#include <array>

template <typename T> T max5(std::array<T, 5> &ar);

int main()
{
	std::array<int, 5> a1 = { 1,2,3,4,5 };
	std::array<double, 5> a2 = { 6.0,7.0,8.0,9.0,10.1 };
	int max_a1;
	double max_a2;
	max_a1 = max5(a1);
	max_a2 = max5(a2);

	std::cout << "max of INT a1 = " << max_a1<<"\n";
	std::cout << "max of double a2 = " << max_a2<< "\n";
	return 1;
}

template <typename T>  T max5(std::array<T, 5> &ar)
{
	T max = ar[0];
	for (int i = 0; i < 5; i++)
	{
		if (max <= ar[i])
			max = ar[i];
	}
	return max;
}
