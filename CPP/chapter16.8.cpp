//¡¶C++ Primer Plus¡·µÚ16ÕÂ ±à³ÌÁ·Ï°8 chapter16.8.cpp
#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::list;
using std::string;

list<string> invite_firends();
void display(string& str);

int main()
{
	list<string> Mat;
	list<string> Pat;
	cout << "##############Mat¡¯s Friends############\n";
	Mat = invite_firends();
	cout << "##############Pat¡¯s Friends############\n";
	Pat = invite_firends();
	list<string> total;
	Mat.sort();
	Pat.sort();
	total.merge(Mat);
	total.merge(Pat);
	total.unique();
	cout << "Here is the name list for the party: \n";
	std::for_each(total.begin(), total.end(), display);

	return 1;
}

list<string> invite_firends()
{
	list<string> temp;
	string name;
	cout << "Please enter your friends' name:(\"quit\" to quit)\n";
	while (std::getline(cin,name)&&name!="quit")
	{
		temp.push_back(name);
		cout << "Enter next friend's name(\"quit\" to quit): \n";
	}
	cout << "OK. See you at the party!\n";
	return temp;
}

void display(string& str)
{
	cout << str << "\t";
}