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
	
	/*
	BOOK(int price, string place, string title, string author); //인수를 통한 방법
	*/
	BOOK() { //함수 오버로딩을 통한 방법
		price = 1000;
		place = "KOREA";
		title = "title";
		author = "author";
	}
};


/*
BOOK::BOOK(int price = 1000, string place = "KOREA", string title = "NONE", string author = "NONE") { //인수를 통한 방법
	this->price = price;
	this->place = place;
	this->title = title;
	this->author = author;
}
*/

int main() {

	BOOK web_book; //암시적
	BOOK *ptr_book = new BOOK; //암시적
	BOOK e_book = BOOK(); //명시적

	cout << web_book.title << endl;
	cout << ptr_book->title << endl;
	cout << e_book.author << endl;

}