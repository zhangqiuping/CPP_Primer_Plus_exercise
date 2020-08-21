//《C++ Primer Plus》第6章 编程练习6 chapter6.6.cpp

#include <iostream>
#include <string>
using namespace std;

struct patrons
{
	string name;
	double donation;
};

int main()
{
	int n,count=0;
	cout << "Enter the number of the patrons:";
	cin >> n;

	if(cin.fail())
	{
		cout << "Input invalid.  Bye!";
		return 0;
	}
	cin.get();//否则getline()会跳过。
	patrons *pa = new patrons[n];
	
	//for循环实现
	/*for (int i = 0; i < n; i++)
	{
		cout << "Enter the name of patrons:";
		getline(cin, pa[i].name);
		cout << "Enter the number of danations:";
		if (!bool(cin >> pa[i].donation))
		{
			cout << "Wrong danation numbers!\n";
			return 0;
		}
		cin.get();//否则getline()会跳过。
	}*/

	//while循环实现
	int i = 0;
	while (i < n)
	{
		cout << "Enter the name of patrons:";
		getline(cin, pa[i].name);
		cout << "Enter the number of danations:";
		if (!bool(cin >> pa[i].donation))
		{
			cout << "Input invalid. Bye!\n";
			return 0;
		}
		cin.get(); //否则getline()会跳过。
		i++;
	}

//输出GRAND PATRONS
	cout << "GRAND PATRONS:\n";
	for (int i = 0; i < n; i++)
	{
		if ((pa + i)->donation >= 10000)
		{
			count++;
			cout << "Name: " << (pa + i)->name << " Donation: " << (pa + i)->donation << " \n";
		}
	}
	if (count == 0)
		cout << "None.\n";

	//输出PATRONS
	count = 0;
	cout << "\nPATRONS:\n";
	for (int i = 0; i < n; i++)
	{
		if ((pa + i)->donation <= 10000)
		{
			cout << (pa + i)->name << " " << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "None.\n";

	delete [] pa;
	return 1;
}