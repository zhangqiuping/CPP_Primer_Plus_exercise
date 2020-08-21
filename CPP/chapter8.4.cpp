//¡¶C++ Primer Plus¡·µÚ8ÕÂ ±à³ÌÁ·Ï°4 chapter8.4.cpp

#include <iostream>
#include <cstring>

using namespace std;

struct stringy
{
	char* str;
	int ct;
};

void show(stringy& str, int n = 1);
void show(char* ch, int n = 1);
void set(stringy& str, const char* ch);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	return 1;
}

void show(stringy& str, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << str.str << "\n";
	}
}
void show(char* ch, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout <<ch<< "\n";
	}
}
void set(stringy& str,  const char* ch)
{
	str.ct = strlen(ch);
	str.str = const_cast<char*>(ch);
}
