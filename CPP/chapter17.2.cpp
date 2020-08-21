//¡¶C++ Primer Plus¡·µÚ17ÕÂ ±à³ÌÁ·Ï°2 chapter17.2.cpp
#include <iostream>
#include <fstream>

using namespace std;
const int LIMIT = 100;

int main()
{
	char filename[100];
	char input[100];
	char ch;
	ofstream fout;
	cout << "Please enter filename:\n";
	cin >> filename;
	fout.open(filename,ios::app);
	if (!fout.is_open())
	{
		cout << "Could not open the file!\n";
		exit(0);
	}
	cin.get(ch);
	while (ch != '\n')
	{
		cin.get(ch);
	}

	cout << "Please input the content(Ctrl+Z to quit):\n"; 
	cin.getline(input, 100);
	while (!cin.eof())
	{
		fout << input;
		cout << input<<" is written into "<<filename<<endl;
		cout << "Please input the content(Ctrl+Z to quit):\n";
		cin.getline(input, 100);
	}

	return 1;
}