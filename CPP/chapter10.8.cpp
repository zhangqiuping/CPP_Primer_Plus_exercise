//¡¶C++ Primer Plus¡·µÚ10ÕÂ ±à³ÌÁ·Ï°8 chapter10.8.cpp
#include <iostream>
#include "list00.h"

using std::cout;
using std::cin;

void mal_item(Item& item);

int main()
{
	int it2[10];
	int n;
	cout << "++++++++++++++++++++++++++++++++++++SetList++++++++++++++++++++++++++++++++++++\n";
	cout << "Input number of items:\n";
	cin >> n;
	cin.get();
	for (int i = 0; i < n; i++)
	{
		cout << "Input " << i + 1 << " item:\n";
		cin >> it2[i];
		cin.get();
	}
	List00 l2(it2, n);
	cout << "++++++++++++++++++++++++++++++++++++MalItems++++++++++++++++++++++++++++++++++++\n";
	l2.visit(&mal_item);
	l2.showitem();
	return 1;
}

void mal_item(Item& item)
{
	item*= item;
}