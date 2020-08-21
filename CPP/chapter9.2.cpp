//¡¶C++ Primer Plus¡·µÚ9ÕÂ ±à³ÌÁ·Ï°2 chapter9.2.cpp

#include <iostream>
#include <string>

//const int ArSize = 10;

//void strcount(const char* str);
void strcount(const std::string str);

int  main()
{
	using namespace std;
	//char input[ArSize];
	//char next;
	string input;

	cout << "Enter a line (empty line to quit):\n";
	getline(cin, input);
	while (input!="")
	{
		/*
		cin.get(next);
		while (next != 'n')
			cin.get(next);
		*/
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		//cin.get(input, ArSize);
		getline(cin, input);
	}

	cout << "Bye!\n";
	return 1;
}

/*
void strcount(const char* str)
{
	using namespace std;
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\"contains ";
	while (*str++)
		count++;
	total += count;
	cout << count << "characters\n";
	cout << total << " characters total\n";
}*/

void strcount(const std::string str)
{
	using namespace std;
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains ";
	count=str.length();
	total += count;
	cout << count << " characters, ";
	cout << total << " characters total\n";
	cout << endl;

}