//¡¶C++ Primer Plus¡·µÚ16ÕÂ ±à³ÌÁ·Ï°4 chapter16.4.cpp
#include <iostream>
#include  <algorithm>


int reduce(long ar[], int n);
void display(const long& n);

int main()
{
	long test[] = { 1,2,3,2,2,2,3,4,6,7,8,10 };
	std::cout << "Sizeof test[]: " << sizeof(test) / sizeof(long) << "\n";
	int n = reduce(test, sizeof(test) / sizeof(long));
	std::cout << "after sort() and unique(), there is still " << n << " numbers in test[].\n";
	return 1;
}

int reduce(long ar[], int n)
{
	int number = 0;
	std::sort(ar, ar + n);
	std::for_each(ar, ar + n, display);
	std::cout << "\n";
	long* new_end = std::unique(ar, ar + n);
	number = new_end - ar;
	std::for_each(ar, new_end, display);
	std::cout << "\n";
	return number;
}

void display(const long& n)
{
	std::cout << n << "\t";
}


