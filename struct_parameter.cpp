#include<iostream>
#include<string>
using namespace std;

struct Book{
	string title;
	string author;
	int price;
};

void Display(const Book&); //call by reference
void Display(const Book*); //call by address

int main() {
	Book web_book = { "HTML과 CSS", "홍길동", 28000 };
	Display(web_book); //call by reference
	web_book = { "JAVA와 객체지향", "임꺽정", 48000 };
	Display(&web_book); //call by address
	return 0;
}

void Display(const Book& book){
	cout << "책의 제목은 \"" << book.title << "\"이고, ";
	cout << "저자는 " << book.author << "이며, ";
	cout << "가격은 " << book.price << "원입니다." << endl;
}

void Display(const Book* book) {
	cout << "책의 제목은 \"" << book->title << "\"이고, ";
	cout << "저자는 " << book->author << "이며, ";
	cout << "가격은 " << book->price << "원입니다." << endl;
	// (*book).title [is equal with] book->title
}