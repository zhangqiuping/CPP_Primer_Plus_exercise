//¡¶C++ Primer Plus¡·µÚ6ÕÂ ±à³ÌÁ·Ï°8 chapter6.8.cpp

#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream infile;
	char ch;
	int count = 0;

	cout << "Please enter the filename: \n";
	cin.getline(filename, SIZE);
	infile.open(filename);
	if (!infile.is_open())
	{
		cout << "Could not open " << filename << "! \n";
		cout << "Programm terminating!\n";
		exit(EXIT_FAILURE);
	}

	infile >> ch;
	while (infile.good())
	{
		count++;
		infile >> ch;
	}

	if (infile.eof())
	{
		cout << "End of the file!\n";
	}
	else if (infile.fail())
	{
		cout << "Wrong data!\n";
	}
	else
	{
		cout << "Input terminated for unkown reason.\n";
	}

	if (count == 0)
	{
		cout << "No data processed!\n";
	}
	else
	{
		cout << "Items read: " << count << " !\n";
	}
	infile.close();
	return 1;
}