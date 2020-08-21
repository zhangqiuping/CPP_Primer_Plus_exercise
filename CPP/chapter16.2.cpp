//《C++ Primer Plus》第16章 编程练习2 chapter16.2.cpp


/* Warning
该程序无法处理中文字符的标点符号。
如需要处理中文字符的标点符号，需使用wstring并使用类方法erase删除中文字符标点符号。
*/


# include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <functional>
#include <cctype>
//#include <vector>


using std::string;
using std::cin;
using std::cout;

bool isPalindrome(const string& str);

int main()
{
	string target;
	cout << "Please enter a word to judge if it is Palindrome(\"quit\" to quit.):\n";
	while (std::getline(cin, target) && target != "quit")
	{
		if (isPalindrome(target))
			cout << "That's a Palindrome!\n";
		else
			cout << "That's not a Palindrome!\n";
		cout << "Please enter a word to judge if it is Palindrome(\"quit\" to quit.):\n";
	}
	return 1;
}

bool isPalindrome(const string& str)
{
	string temp = str;
	string result;
	for (string::iterator a = temp.begin(); a != temp.end(); )
	{
		if (isalpha(*a)==0)
		{
			a=temp.erase(a); //保证迭代器的位置不丢失且不产生野指针
				continue;
		}
		a++;
	}
	
	cout <<"original:""\t"<< temp << "\n";//debug

	transform(temp.rbegin(), temp.rend(), std::insert_iterator<string>(result,result.begin()), tolower);
	cout <<"_change_:"<<"\t"<<result << "\n"; //debug
	if (temp == result)
		return true;
	else
		return false;
}