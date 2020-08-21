//《C++ Primer Plus》第17章 编程练习1 chapter17.1.cpp
#include <iostream>
#include<string>
using namespace std;
//const int LIMIT = 100;

int main()
{



/*方法1*/
/*	char ch;
	int ct = 0;
	cout << "Enter some chars. This programm will tell you how much char before '$':\n";
	cin.get(ch);
	while (cin.good() && ch!= '$')
	{
		ct++;
		cin.get(ch);
	}
	if (cin.fail())
		cout << "Input error." << endl;
	else
	{

		cout << "there's " << ct << " char in total. " << endl;
		cin.putback(ch);
		cin.get(ch);
		cout << "Next char is " << ch << endl;
	}*/

	/*方法2*/
	char ch[100];
	char c;
	int ct;
	cout << "Enter some chars. This programm will tell you how much char before '$':\n";
	cin.get(ch, 100, '$');
	for (ct = 0; ch[ct] != '\0';ct++)
	{
	}
	cout << "There are " << ct << " Words " << endl;
	cin.get(c);
	cout << "Next char is " << c << "!\n";
	return 1;
}