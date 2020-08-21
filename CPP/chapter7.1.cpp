//《C++ Primer Plus》第7章 编程练习1 chapter7.1.cpp

#include <iostream>

double harmonic(double x, double y);

int main()
{
	double result, x, y;
	std::cout << "Please enter two numbers(type 0 to exit):\n ";
	std::cin >> x >> y;
	while (x!=0&&y!=0)
	{
		result = harmonic(x, y);
		std::cout << "harmonic mean of " << x << "and " << y << " is: " << result << ".\n";
		std::cin >> x >> y;
	}
	return 1;
}

double harmonic(double x, double y)
{
	return 2.0 * x * y / (x + y);
}


// 关于指针 * & 用法test
/*#include <iostream>

int main()
{
	using namespace std;

	int number = 10;
	int arrayofnumber[5] = { 4,3,2,1,0 };
	int* pointerofnumber = &number;
	int* arrayofpointer[5] = {};

	cout << "number=" << number << ", *number=" <<"not exist " << " &number=" << &number << endl;
	cout << "arrayofnumber+1=" << arrayofnumber+1<< ", *(arrayofnumber+1)=" << *(arrayofnumber+1) << " &arrayofnumber+1=" << &arrayofnumber+1 << endl;
	cout << "pointerofnumber=" << pointerofnumber << ", *pointerofnumber=" << *pointerofnumber << " &pointerofnumber=" << &pointerofnumber << endl;
	cout << " arrayofpointer=" << arrayofpointer << ", * arrayofpointer=" << *arrayofpointer << " & arrayofpointer=" << &arrayofpointer << endl;
	return 1;
}*/