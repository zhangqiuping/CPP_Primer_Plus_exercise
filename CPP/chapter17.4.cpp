//¡¶C++ Primer Plus¡·µÚ17ÕÂ ±à³ÌÁ·Ï°4 chapter17.4.cpp
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	ifstream fin01("new.txt"), fin02("old.txt");
	ofstream fout;
	string final_filename;
	string s1, s2,s3;

	cout << "Please enter the final filename:\n";
	cin >> final_filename;
	fout.open(final_filename, ios::app);
	if (!fout.is_open())
	{
		cout << "Could not open the file: " << final_filename << "! Program terminated.\n";
		exit(EXIT_FAILURE);
	}
	while (getline(fin01, s1) && getline(fin02, s2))
	{
		s3 = s1 + ' ' + s2;
		fout << s3 << endl;
		if (fin01.eof() || fin02.eof())
			break;	
	}

	if(fin01.eof())
		while (!fin02.eof())
		{
			getline(fin02, s2);
			fout << s2 << endl;
		}

	if (fin02.eof())
		while (!fin01.eof())
		{
			getline(fin01, s1);
			fout << s1 << endl;
		}
	
	fin01.close();
	fin01.clear();

	char ch;
	fin01.open(final_filename);
	while (fin01.get(ch))
	{
		cout << ch;
	}

	return 1;
}