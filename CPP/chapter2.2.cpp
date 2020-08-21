//《C++ Primer Plus》第2章 编程练习2 chapter2.2.cpp

#include <iostream>

int main()
{
	float longdistance;
	std::cout << "请输入一个以long为单位的距离：";
	std::cin >> longdistance;
	std::cout << "根据您所输入以long为单位的距离，换算为" << longdistance * 220 << "码。" << std::endl;
	return 1;
}