//��C++ Primer Plus����6�� �����ϰ6 chapter6.6.cpp

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
	cin.get();//����getline()��������
	patrons *pa = new patrons[n];
	
	//forѭ��ʵ��
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
		cin.get();//����getline()��������
	}*/

	//whileѭ��ʵ��
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
		cin.get(); //����getline()��������
		i++;
	}

//���GRAND PATRONS
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

	//���PATRONS
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