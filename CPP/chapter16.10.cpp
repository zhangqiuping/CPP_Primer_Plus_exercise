//¡¶C++ Primer Plus¡·µÚ16ÕÂ ±à³ÌÁ·Ï°10 chapter16.10.cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;


struct Review 
{
	std::string title;
	int rating;
	double price;
};

bool operator<(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2);
bool worseThan_rating(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2);
bool worseThan_price(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2);

bool FillReview(shared_ptr<Review>& temp);
void ShowReview(const shared_ptr<Review>& rr);

int main()
{
	using namespace std;
	vector<shared_ptr<Review>> books;
	shared_ptr<Review> temp(new Review);
	while (FillReview(temp))
	{
		books.push_back(temp);

	}
	if (books.size() > 0)
	{
		cout << "Thank you. You entered the following " << books.size() << " books:\n" ;
		cout << "Enter \"T\" to sort the books with titles.\n";
		cout << "Enter \"R\" to sort the books with ratings.\n";
		cout << "Enter \"P\" to sort the books with prices.\n";
		cout << "Enter \"S\" to sort the books with randomshuffling.\n";

		char ch;
		cin >> ch;
		ch = (char)std::tolower(ch);
		switch (ch)
		{
		case 't': 	sort(books.begin(), books.end()); break;
		case 'r':	sort(books.begin(), books.end(), worseThan_rating); break;
		case 'p':	sort(books.begin(), books.end(), worseThan_price); break;
		case 's':	random_shuffle(books.begin(),books.end()); break;
		default:	cout << "Wrong choice. books will not be sorted.\n"; break;
		}
		cout<< "Rating\tPrice\tTitle\n";
		for_each(books.begin(), books.end(), ShowReview);
	}
	else
		cout << "No entries.";
	cout << "Bye.\n";
	return 1;
}

bool operator<(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2)
{
	if (r1->title < r2->title)
		return true;
	else if (r1->title == r2->title && r1->rating < r2->rating)
		return true;
	else if (r1->title == r2->title && r1->rating == r2->rating && r1->price < r2->price)
		return true;
	else
		return false;
}

bool worseThan_rating(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2)
{
	if (r1->rating < r2->rating)
		return true;
	else
		return false;
}

bool worseThan_price(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2)
{
	if (r1->price < r2->price)
		return true;
	else
		return false;
}


 bool FillReview(shared_ptr<Review>& temp)
{
	shared_ptr<Review>rr(new Review);
	std::cout << "Enter book title(\"quit\" to quit): ";
	std::getline(std::cin, rr->title);
	if (rr->title == "quit")
		return false;
	std::cout << "Enter book rating: ";
	std::cin >> rr->rating;
	if (!std::cin)
		return false;
	std::cout << "Enter book price: ";
		std::cin >> rr->price;
	if (!std::cin)
			return false;
	while (std::cin.get() != '\n')
		continue;
	temp = rr;
	return true;
}

void ShowReview(const shared_ptr<Review>& rr)
{
	std::cout << rr->rating << "\t" << rr->price <<"\t"<<rr->title<< std::endl;
}