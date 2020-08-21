//¡¶C++ Primer Plus¡·µÚ8ÕÂ ±à³ÌÁ·Ï°6 chapter8.6.cpp

#include <iostream>
#include <cstring>

template <typename T> T maxn(T *ar, int n);
char* maxn(const char** ch, int n);

int main()
{
	int a1[6] = { 1,2,3,4,5,6 };
	double  a2[4] = {7.0,8.0,9.0,10.1 };
	const char* ch[] = { "one","two","three","four","five" };

	int max_a1;
	double max_a2;	

	max_a1 = maxn(a1,6);
	max_a2 = maxn(a2,4);
	char* max_c1= maxn(ch, 5);

	std::cout << "max of Int a1 = " << max_a1 << "\n";
	std::cout << "max of Double a2 = " << max_a2 << "\n";
	std::cout << "max of Char[](str) c1 = " << max_c1<< "\n";

	return 1;
}

template <typename T>  T maxn(T *ar,int n)
{
	T max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < ar[i])
			max = ar[i];
	}
	return max;
}
 
char* maxn(const char** ch, int n)
{
	int max = 0;
	int c = 0,j=0;
	
	for (int i = 0; i < n; i++)
	{
		c = strlen(ch[i]);
		if (max < c)
		{
			max = c;
			j = i;
		}
	}
	return const_cast<char*>(*(ch + j));
}
