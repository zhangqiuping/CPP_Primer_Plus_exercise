//¡¶C++ Primer Plus¡·µÚ16ÕÂ ±à³ÌÁ·Ï°7 chapter16.7.cpp
#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

vector<int> Lotto(int totol_number, int lotto_number);
void display(int t);

int main()
{
	int max;
	int l;
	std::cout << "Enter the total number of lotto:\n";
	std::cin >> max;

	std::cout << "Enter the number of lotto:\n";
	std::cin >> l;

	vector<int> winner;
	winner = Lotto(max, l);
	std::for_each(winner.begin(), winner.end(), display);
	std::cout << "\n";
	return 1;
}

vector<int> Lotto(int totol_number, int lotto_number)
{
	vector<int> temp(lotto_number);
	vector<int> total(totol_number);
	for (int i = 1; i < totol_number + 1; i++)
		total[i-1] = i;
	for (int i = 0; i < lotto_number; i++)
	{
		std::random_shuffle(total.begin(), total.end());
		temp[i] = total[0];
	}
	return temp;
}

void display(int t)
{
	std::cout << t << "\t";
}