//《C++ Primer Plus》第12章 编程练习6 chapter12.6.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include"queue00.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;

	std::srand(std::time(0));
	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maxinum size of queue: ";
	int qs;
	cin >> qs;
	Queue line(qs);
	Queue line1(qs);

	/*  
	cout << "Enter the number of simulation hours: ";
	int hours;
	cin >> hours;
	*/

	//将模拟时间定义为100小时。
	int hours = 100;

	long cyclelimit = MIN_PER_HR * hours;

	/*
	cout << "Enter the average number of customers per hour: ";
	double perhour;
	cin >> perhour;
	*/
	double perhour=60;

	double min_per_cust;
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time = 0;
	long line_wait = 0;
	int side = 0;
	//bool condition1 =  0;
	//bool condition2 = 0;

	do
	{
		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust))
			{
				if (line.isfull()&&line1.isfull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);
					if (!line.isfull())
					{
						line.enqueue(temp);
						side = 1;
					}
					else if (!line1.isfull())
					{
						line1.enqueue(temp);
						side = 2;
					}
				}
			}

			if (side == 1)
			{
				if (wait_time <= 0 && !line.isempty())
				{
					line.dequeue(temp);
					wait_time = temp.ptime();
					line_wait += cycle - temp.when();
					served++;
				}
				if (wait_time > 0)
					wait_time--;
				sum_line += line.queuecount();
			}
			if (side == 2)
			{
				if (wait_time <= 0 && !line1.isempty())
				{
					line1.dequeue(temp);
					wait_time = temp.ptime();
					line_wait += cycle - temp.when();
					served++;
				}
				if (wait_time > 0)
					wait_time--;
				sum_line += line1.queuecount();
			}
		}
		perhour--;
		cout << "perhour: " << perhour << endl;
		min_per_cust = MIN_PER_HR / perhour;
		//condition1 = (double)line_wait / served > 0;
		//condition2 = perhour > 1;
	} while ((double)line_wait / served > 0&& perhour > 1);

	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << "    customers served: " << served << endl;
		cout << "                turnaways: " << turnaways << endl;
		cout << "  average queue size:";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimit << endl;
		cout << "  customers per hour: " << perhour << "\n";
	}
	else
		cout << "No customers!\n";
	cout << "Done!\n";
	return 1;
}

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}