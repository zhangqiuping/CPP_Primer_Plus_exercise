//《C++ Primer Plus》第4章 编程练习10 chapter4.10.cpp

#include <iostream>
#include <array>

const int n = 3;

int main()
{
	//声明变量
	std::array<double, n> scores{};
	double average_score = 0.0;

	//输入成绩
	for (int i = 0; i < n; i++)
	{
		std::cout << "Enter your " << i + 1 << " score: ";
		std::cin >> scores[i];
	}

	//计算平均成绩
	for (int i = 0; i < n; i++)
	{
		average_score += scores[i];
	}
	average_score /= n;

	//输出次数和平均成绩
	std::cout << "You have runned for " << n << " times. Your average score is " << average_score << ". " << std::endl;

	return 1;
}