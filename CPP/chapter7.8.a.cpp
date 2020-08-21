//¡¶C++ Primer Plus¡·µÚ7ÕÂ ±à³ÌÁ·Ï°8 chapter7.8.a.cpp
#include<iostream>
 
const int SEASONS = 4;
const char* se[4] = { "Spring","Summer"," Fall ","Winter" };

void fill(double pa[]);
void show(double pa[]);

int main()
{
	double data[SEASONS];
	fill(data);
	show(data);

	return 1;
}

void fill(double pa[])
{
	for (int i = 0; i < SEASONS; i++)
	{
		std::cout << "Enter " << se[i] << " expenses: ";
		std::cin >> *(pa + i);
	}
}
void show(double pa[])
{
	double total = 0.0;
	for (int i = 0; i < SEASONS; i++)
	{
		std::cout << se[i] << " : $ " << pa[i] << "\n";
		total += pa[i];
	}
	std::cout << "Total expenses is $ " << total << " dollars.\n";
}
