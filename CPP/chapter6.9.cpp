//《C++ Primer Plus》第6章 编程练习9 chapter6.9.cpp

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

struct patrons
{
	std::string name;
	double donation;
};

int main()
{
	using namespace std;
	int n, count = 0;
	char filename[SIZE];
	ifstream infile;

	cout << "Enter the filename:";
	cin.getline(filename, SIZE);
	infile.open(filename);
	if (!infile.is_open())
	{
		cout << "Could not open " << filename << "!\n";
		cout << "Programm terminating....\n";
		exit(EXIT_FAILURE);
	}

	infile>>n;
	infile.ignore();
	patrons* pa = new patrons[n];

	for (int i = 0; i < n; i++)
	{
		getline(infile, pa[i].name);
		infile>>pa[i].donation;
		infile.ignore();
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

	delete[] pa;
	infile.close();
	return 1;
}