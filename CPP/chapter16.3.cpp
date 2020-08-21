//《C++ Primer Plus》第16章 编程练习3 chapter16.3.cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <vector>
#include <fstream>

using std::string;
using std::vector;
//const int NUM = 26;
/*const vector<string> wordlist = { "apiary","beetle","cereal","danger","ensign","florid","garage","health","insult","jackal",
"keeper","loaner","manager","nonce","onset","plaid","quilt","remote","stolid","train","useful","valid","whence","xenon","yearn","zippy"
};*/

void readfile(const string filepath, vector<string>& wordlist);


int main()
{
	using std::cout;
	using std::cin;
	using std::tolower;
	using std::endl;

	//从文件读取wordlist
	vector<string> wordlist;
	readfile("wordlist.txt", wordlist);
	std::srand(std::time(0));
	char play;
	cout << "Will you play a word game?<y/n>";
	cin >> play;
	play = tolower(play);
	while (play == 'y')
	{
		string target = wordlist[std::rand() % wordlist.size()];
		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "Guess my screct word. It has " << length << " letters, and you guess\n"
			<< "one letter at a time. you get " << guesses << " wrong guesses.\n";
		cout << "Your word: " << attempt << endl;
		while (guesses > 0 && attempt != target)
		{
			char letter;
			cout << "Guess a letter: ";
			cin >> letter;
			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
			{
				cout << "You already guessed that. Try again.\n";
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "Oh, bad guess!\n";
				--guesses;
				badchars += letter;
			}
			else
			{
				cout << "Good guess!\n";
				attempt[loc] = letter;
				loc = target.find(letter, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "Your word: " << attempt << endl;
			if (attempt != target)
			{
				if (badchars.length() > 0)
					cout << "Bad choices: " << badchars << endl;
				cout << guesses << "bad guesses left\n";
			}
		}
		if (guesses > 0)
			cout << "That's right!\n";
		else
			cout << "Sorry, the word is " << target << ".\n";
		cout << "Will you play another?<y/n>";
		cin >> play;
		play = tolower(play);
	}
	cout << "Bye!\n";
	return 1;
}

void readfile(const string filepath, vector<string>& wordlist)
{
	using std::cout;
	string words;
	std::fstream fin;
	fin.open(filepath);
	if (!fin.is_open())
	{
		cout << "Could not open \"Wordlist.txt\". \n";
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	fin >> words;
	while (fin.good())
	{
		wordlist.push_back(words);
		fin >> words;
	}
	if (fin.eof())
		cout << "End of \"Wordlist.txt\"\n";
	else if (fin.fail())
		cout << "Input terminated by data dismatch.\n";
	else
		cout << "Input terminated by unkown reason.\n";


}