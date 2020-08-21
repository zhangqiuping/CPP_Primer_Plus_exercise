//《C++ Primer Plus》第16章 编程练习9 chapter16.9.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using std::vector;
using std::list;
using std::cout;
using std::cin;

const int TEST01 = 100000;
const int TEST02 = 1000000;
const int TEST03 = 10000000;

void test(int n);


int main()
{
	cout << "TEST01 100000\n";
	test(TEST01);
	cout << "\nTEST02 1000000\n";
	test(TEST02);
	cout << "\nTEST03 10000000\n";
	test(TEST03);
	return 1;
}

void test(int n)
{
	std::srand(std::time(0));
	vector<int> vi0(n);
	vector<int> vi(n);
	list<int> li;

	//利用rand()给vi0赋值，并将vi0的值赋值给vi和li
	for (int i = 0; i < n; i++)
	{
		vi0[i] = rand();
		li.push_back(vi0[i]);
		vi.push_back(vi0[i]);
	}

	cout << "测试STL sort()针对vi的时间:\n";
	clock_t start = clock();
	std::sort(vi.begin(), vi.end());
	clock_t end = clock();
	cout << "累计时间:"<<double(end - start) / CLOCKS_PER_SEC<<"\n";

	cout << "测试li.sort()i的时间:\n";
	start = clock();
	li.sort();
	end = clock();
	cout << "累计时间:" << double(end - start) / CLOCKS_PER_SEC << "\n";

	li.assign(vi0.begin(), vi0.end());
	cout << "测试拷贝->排序->拷贝的时间:\n";
	start = clock();
	vi.assign<>(li.begin(), li.end());
	sort(vi.begin(), vi.end());
	li.assign(vi.begin(),vi.end());
	end = clock();
	cout << "累计时间:" << double(end - start) / CLOCKS_PER_SEC << "\n";
}
