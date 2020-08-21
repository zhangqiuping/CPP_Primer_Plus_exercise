//¡¶C++ Primer Plus¡·µÚ10ÕÂ ±à³ÌÁ·Ï°5 chapter10.5.cpp
#include<iostream>
#include"stack00.h"

using std::cout;
using std::cin;

//static double total = 0;

void Insert_stack(Stack & stack1);
void delete_stack(Stack& stack1);

int main()
{
	Stack customer1;

	char order;
	cout << "++++++++++++++++++++++++++++++++++++++++Input Customer Info++++++++++++++++++++++++++++++++++++++++\n";
	cout << "Oders: I or i to inerst | D or d to delete | Q or q to quit!\n";
	cin >> order;
	cin.get();
	while (order!='q'||order=='Q')
	{
		switch (order)
		{
			case 'i':
			case 'I': Insert_stack(customer1); break;
			case 'd':
			case 'D':delete_stack(customer1); break;
			default: cout << "Please input the right order.\n";break;
		}
		cout << "Oders: I or i to inerst | D or d to delete | Q or q to quit!\n";
		cin >> order;
		cin.get();
		if (!cin)
			break;
	}
	cout << "Bye!\n";
	return 1;
}

void Insert_stack(Stack &stack1)
{
	customer cm;
	if (!stack1.isfull())
	{
		cout << "Please input the name of customer:\n";
		cin.getline(cm.fullname, 35);
		cout << "Please input the payment of customer:\n";
		cin >> cm.payment;
		cin.get();
		stack1.push(cm);
	}
	else
		cout << "Stack of customer is full. No data could be pushed!\n";
}

void delete_stack(Stack& stack1)
{
	static double total = 0;
	customer cm;
	if (!stack1.isempty() )
	{
		stack1.pop(cm);
		total += cm.payment;	
		cout << "The total deleted customer payment until now is " << total << "!\n";
	}
	else
		cout << "Stack of customer is empty. No data could be poped!\n";

}