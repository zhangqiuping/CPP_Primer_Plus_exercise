//��C++ Primer Plus����16�� �����ϰ2 chapter16.2.cpp


/* Warning
�ó����޷����������ַ��ı����š�
����Ҫ���������ַ��ı����ţ���ʹ��wstring��ʹ���෽��eraseɾ�������ַ������š�
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
			a=temp.erase(a); //��֤��������λ�ò���ʧ�Ҳ�����Ұָ��
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