//¡¶C++ Primer Plus¡·µÚ7ÕÂ ±à³ÌÁ·Ï°8 chapter7.8.b.cpp

#include<iostream>

const int SEASONS = 4;
const char* se[4] = { "Spring","Summer"," Fall ","Winter" };
struct expenses
{
	double expense=0.0;
};

void fill(expenses pa[]);
void show(expenses pa[]);

int main()
{
	expenses data[SEASONS];
	fill(data);
	show(data);

	return 1;
}

void fill(expenses pa[])
{
	for (int i = 0; i < SEASONS; i++)
	{
		std::cout << "Enter " << se[i] << " expenses: ";
		std::cin >> (pa + i)->expense;
	}
}
void show(expenses pa[])
{
	double total = 0.0;
	for (int i = 0; i < SEASONS; i++)
	{
		std::cout << se[i] << " : $ " << pa[i] .expense<< "\n";
		total += pa[i].expense;
	}
	std::cout << "Total expenses is $ " << total << " dollars.\n";
}
