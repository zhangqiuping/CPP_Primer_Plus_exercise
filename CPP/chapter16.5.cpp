//��C++ Primer Plus����16�� �����ϰ5 chapter16.5.cpp
#include <iostream>
#include  <algorithm>
#include <vector>

template<class T>
int reduce(T ar[], int n);

int main()
{
	//long ���Ͳ���
	std::cout << "Here is test for long:\n";
	long test[] = { 1,2,3,2,2,2,3,4,6,7,8,10 };
	std::cout << "Sizeof test[]: " << sizeof(test) / sizeof(long) << "\n";
	int n = reduce(test, sizeof(test) / sizeof(long));
	std::cout << "after sort() and unique(), there is still " << n << " numbers in test[].\n";

	std::cout << "\nHere is test for string:\n";
	//string���Ͳ���
	std::string wordtest[] = { "good","go","go","wow","boy","go","how","many" };
	std::cout << "Sizeof test[]: " << sizeof(wordtest) / sizeof(std::string) << "\n";
	n = reduce(wordtest, sizeof(wordtest) / sizeof(std::string));
	std::cout << "after sort() and unique(), there is still " << n << " numbers in test[].\n";
	return 1;
}


template<class T>
int reduce(T ar[], int n)
{
	std::cout << "Original Data:\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << *(ar + i) << "\t";
	}
	std::cout << "\n";

	int number = 0;
	std::sort(ar,ar+n);

	//��ʾ���������
	std::cout << "after Sort() Data:\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << *(ar + i) << "\t";
	}
	std::cout << "\n";

	T* new_end = std::unique(ar, ar+n);
	number = new_end - ar;

	//��ʾUnique()�������
	std::cout << "after Unique() Data:\n";
	for (int i = 0; i < number; i++)
	{
		std::cout << *(ar + i)<<"\t";
	}
	std::cout << "\n";

	return number;
}

