//《C++ Primer Plus》第5章 编程练习8 chapter5.8.cpp

#include <iostream>
#include <cstring>

int main()
{
	char word[30]{};
	std::cout << "Enter Words. (to stop type the word “done”): \n";

	std::cin >> word;
	int count = 0;

	while (strcmp(word, "done")!=0)
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