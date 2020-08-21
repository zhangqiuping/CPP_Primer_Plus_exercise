//¡¶C++ Primer Plus¡·µÚ16ÕÂ ±à³ÌÁ·Ï°1 chapter16.1.cpp
# include <iostream>
#include <string>
#include <iterator>
#include <algorithm>


using std::string;
using std::cin;
using std::cout;

bool isPalindrome(const string& str);

int main()
{
	string target;
	cout << "Please enter a Wort to judge if it is Palindrome(\"quit\" to quit.):\n";
	while (std::getline(cin,target) && target != "quit")
	{
		if (isPalindrome(target))
			cout << "That's a Palindrome!\n";
		else
			cout << " That's not a Palindrome!\n";
		cout << "Please enter a Wort to judge if it is Palindrome(\"quit\" to quit.):\n";
	}
	return 1;
}

bool isPalindrome(const string& str)
{
	string temp=str;
	copy(temp.rbegin(), temp.rend(), temp.begin());
	if (str == temp)
		return true;
	else
		return false;
}