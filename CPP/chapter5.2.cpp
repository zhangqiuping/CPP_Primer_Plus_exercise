//��C++ Primer Plus����5�� �����ϰ2 chapter5.2.cpp

#include <iostream>
#include <array>

//����100����ֵ��
const int ArSize = 101;

int main()
{
	std::array <long double, ArSize>  factorials={1};
	for (int i = 1; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "!=" << factorials[i] << std::endl;
	return 1;
}