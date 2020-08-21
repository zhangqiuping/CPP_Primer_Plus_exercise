//《C++ Primer Plus》第8章 编程练习3 chapter8.3.cpp

#include <iostream>
#include <string>
#include <cctype>

using namespace std;


string upper_string(string str);

int main()
{
	string str_word;
	cout << "Enter a string(q to quit):";
	getline(cin, str_word);
	while (str_word != "q")
	{
		str_word = upper_string(str_word);
		cout << str_word<<"\n";
		cout << "Enter a string(q to quit):";
		getline(cin, str_word);
	}


	return 1;
}

string upper_string(string str) 
{
	/*//方法1
	char* word = const_cast<char*>(str.c_str());
	int size = str.size();
	for (int i = 0; i < size; i++)
	{
		word[i] = toupper(word[i]);
	}
	str = word;
	*/
	
	//方法2
	for ( char &ch : str)
	{
		ch = toupper(ch);
	}
	return str;
}
