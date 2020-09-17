#include<iostream>
#include<string>

using namespace std;

class BOOK {
private:
	int price;
	string place;
public:
	string title;
	string author;
	BOOK(int price, string place, string title, string author); 
};

BOOK::BOOK(int price, string place, string title, string author) {
	this->price = price;
	this->place = place;
	this->title = title;
	this->author = author;
}

int main() {
	BOOK web_book(10000, "korea", "None", "None"); //암시적
	BOOK e_book = BOOK(20000, "us", "one", "two"); //명시적
	cout << web_book.title << endl;
	cout << e_book.title << endl;
}