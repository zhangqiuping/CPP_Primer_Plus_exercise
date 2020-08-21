//¡¶C++ Primer Plus¡·µÚ6ÕÂ ±à³ÌÁ·Ï°7 chapter6.7.cpp

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string name;
	int count = 0;
	int consonants= 0;
	int others=0;
	cout << "Enter words(q to quit):\n";
	cin >> name;
	while (name != "q")
	{
		if(isalpha(name[0]))
			switch (name[0])
			{
			case 'a':
			case 'A':count++; break;
			case 'e':
			case 'E':count++; break;
			case 'i':
			case 'I':count++; break;
			case 'o':
			case 'O':count++; break;
			case 'u':
			case 'U':count++; break;
			default:
				consonants++;
			}
		others++;
		cin >> name;
	}
	others = others - 1 - consonants - count;
	cout << count << " words beginning with vowels\n";
	cout << consonants << " words beginning with consonants\n";
	cout << others << " others.\n";
	return 1;
}