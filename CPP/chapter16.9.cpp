//��C++ Primer Plus����16�� �����ϰ9 chapter16.9.cpp
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

	//����rand()��vi0��ֵ������vi0��ֵ��ֵ��vi��li
	for (int i = 0; i < n; i++)
	{
		vi0[i] = rand();
		li.push_back(vi0[i]);
		vi.push_back(vi0[i]);
	}

	cout << "����STL sort()���vi��ʱ��:\n";
	clock_t start = clock();
	std::sort(vi.begin(), vi.end());
	clock_t end = clock();
	cout << "�ۼ�ʱ��:"<<double(end - start) / CLOCKS_PER_SEC<<"\n";

	cout << "����li.sort()i��ʱ��:\n";
	start = clock();
	li.sort();
	end = clock();
	cout << "�ۼ�ʱ��:" << double(end - start) / CLOCKS_PER_SEC << "\n";

	li.assign(vi0.begin(), vi0.end());
	cout << "���Կ���->����->������ʱ��:\n";
	start = clock();
	vi.assign<>(li.begin(), li.end());
	sort(vi.begin(), vi.end());
	li.assign(vi.begin(),vi.end());
	end = clock();
	cout << "�ۼ�ʱ��:" << double(end - start) / CLOCKS_PER_SEC << "\n";
}
