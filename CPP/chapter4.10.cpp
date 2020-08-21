//��C++ Primer Plus����4�� �����ϰ10 chapter4.10.cpp

#include <iostream>
#include <array>

const int n = 3;

int main()
{
	//��������
	std::array<double, n> scores{};
	double average_score = 0.0;

	//����ɼ�
	for (int i = 0; i < n; i++)
	{
		std::cout << "Enter your " << i + 1 << " score: ";
		std::cin >> scores[i];
	}

	//����ƽ���ɼ�
	for (int i = 0; i < n; i++)
	{
		average_score += scores[i];
	}
	average_score /= n;

	//���������ƽ���ɼ�
	std::cout << "You have runned for " << n << " times. Your average score is " << average_score << ". " << std::endl;

	return 1;
}