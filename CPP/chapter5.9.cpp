//《C++ Primer Plus》第5章 编程练习9 chapter5.9.cpp

#include <iostream>
#include <string>

int main()
{
	std::string word{};
	std::cout << "Enter Words. (to stop type the word done): \n";
	std::cin >> word;

	int count = 0;

	while (word!="done")
	{
		if (std::cin)
		{
			std::cin >> word;
			count++;
		}
		/* 使用bool函数判断cin是否成功。当输入一个单词(以空格结尾)则bool为true
		if(bool(cin>>word))
		count++;
		*/

	}
	std::cout << "You entered a total of  " << count << " words.\n";
	return 1;
}