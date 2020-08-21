//《C++ Primer Plus》第8章 编程练习1 chapter8.1.cpp

#include <iostream>
#include <string>

using namespace std;


void printstring(string str, int n = 0);

int main()
{
	string str;
	int n = 0;
	cout << "Please input string:" << "\n";
	getline(cin, str);
	cout << "Input Parameter n:\n";
	cin >> n;

	cout << "Show Printstring() without Parameter n:\n";
	printstring(str);
	cout << "Show Printstring() with Parameter n="<<n<<" :\n";
	printstring(str, n);
	return 1;
}

void printstring(string str, int n)
{
	static int count=0; //静态变量，函数退出后count仍然储存在内存内。
	count++;
	if (n == 0)
		cout << str<<"\n";
	if (n != 0)
		for (int i = 0; i < count; i++)
			cout << str << "\n";
}