//��C++ Primer Plus����5�� �����ϰ8 chapter5.8.cpp

#include <iostream>
#include <cstring>

int main()
{
	char word[30]{};
	std::cout << "Enter Words. (to stop type the word ��done��): \n";

	std::cin >> word;
	int count = 0;

	while (strcmp(word, "done")!=0)
	{
		if (std::cin)
		{
			std::cin >> word;
			count++;
		}
		/* ʹ��bool�����ж�cin�Ƿ�ɹ���������һ������(�Կո��β)��boolΪtrue
		if(bool(cin>>word))
		count++;
		*/

	}
	std::cout << "You entered a total of  " << count << " words.\n";
	return 1;
}