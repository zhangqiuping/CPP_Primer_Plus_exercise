//��C++ Primer Plus����5�� �����ϰ9 chapter5.9.cpp

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
		/* ʹ��bool�����ж�cin�Ƿ�ɹ���������һ������(�Կո��β)��boolΪtrue
		if(bool(cin>>word))
		count++;
		*/

	}
	std::cout << "You entered a total of  " << count << " words.\n";
	return 1;
}