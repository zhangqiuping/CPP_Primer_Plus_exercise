//¡¶C++ Primer Plus¡·µÚ17ÕÂ ±à³ÌÁ·Ï°3 chapter17.3.cpp
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	ifstream fin;
	ofstream fout;
	string filename01;
	string filename02;
	string content;
	cout << "Please enter the filename which you want to copy from:\n";
	cin >> filename01;
	cout << "Please enter the filename which you want to copy to:\n";
	cin >> filename02;
	
	//fin. open
	fin.open(filename01);
	if (fin.fail())
	{
		cout << "Could not open the file " << filename01 <<". Programm terminated."<< endl;
		exit(EXIT_FAILURE);
	}

	//fout.open
	fout.open(filename02,ios::app);
	if (fin.fail())
	{
		cout << "Could not open the file " << filename02 << ". Programm terminated." << endl;
		exit(EXIT_FAILURE);
	}

	getline(fin, content);
	while (1)
	{
		fout << content << "\n";
		if (fin.eof())
			break;
		getline(fin, content);
	}
	
	fin.close();
	fin.clear();
	fin.open(filename02);
	getline(fin, content);
	while (1)
	{
		cout << content << endl;
		if (fin.eof())
			break;
		getline(fin, content);
	}

	return 1;
}