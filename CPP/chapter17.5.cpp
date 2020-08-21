//¡¶C++ Primer Plus¡·µÚ17ÕÂ ±à³ÌÁ·Ï°5 chapter17.5.cpp
#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <fstream>

using std::cout;
using std::cin;
using std::list;
using std::string;

void display(string& str);

int main()
{
	list<string> Mat;
	list<string> Pat;
	string name;
	std::ifstream fin01("Mat.dat");
	std::ifstream fin02("Pat.dat");
	if (!fin01.is_open() || !fin02.is_open())
	{
		cout << "Could not open the file. Program terminated.\n";
		exit(EXIT_FAILURE);
	}

	//get infomation of Mat's friends from Mat.dat
	while (std::getline(fin01, name))
	{
		Mat.push_back(name);
		if (fin01.eof())
			break;
	}

	//get infomation of Pat's friends from Mat.dat
	while (std::getline(fin02, name))
	{
		Mat.push_back(name);
		if (fin02.eof())
			break;
	}

	list<string> total;
	Mat.sort();
	Pat.sort();
	total.merge(Mat);
	total.merge(Pat);
	total.unique();

	//save the list of guest in matnpat.dat

	std::ofstream fout("matnpat.dat");
	if (!fout.is_open())
	{
		cout << "Could not open the file " << "matnpat.dat. Program terminated.\n";
	}

	for (string x : total)
		fout << x << std::endl;

	cout << "Here is the name list for the party: \n";
	std::for_each(total.begin(), total.end(), display);

	return 1;
}


void display(string& str)
{
	cout << str << "\n";
}
