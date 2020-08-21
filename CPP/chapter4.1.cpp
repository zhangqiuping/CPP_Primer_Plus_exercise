//《C++ Primer Plus》第4章 编程练习1 chapter4.1.cpp

#include <iostream>

int main()
{
	//定义数据
	char firstname[20], lastname[20];
	char grade;
	int age;
	//用户HMI，输入数据
	std::cout << "What's your first name?"<<std::endl;
	std::cin.getline(firstname, 20);
	std::cout << "What's your last name:?" << std::endl;
	std::cin.getline(lastname, 20);
	std::cout << "What letter grade do you deserve?\n";
	std::cin>>grade;
	std::cout << "What is your age?\n";
	std::cin >> age;
	//将成绩下降1
	grade += 1;
	//输出数据
	std::cout << "Name: " << lastname << ", " << firstname << std::endl;
	std::cout << "Grade: " << grade<<std::endl;
	std::cout << "Age:" << age << std::endl;

	return 1;
}