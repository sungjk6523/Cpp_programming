#include<iostream>
#include<string>

using namespace std;

class BOOK {
public:
	string author;
	string title;
	int page;
	void init(string title = "None", string author = "None", int page = 0) {
		this->title = title;
		this->author = author;
		(*this).page = page;
	} 
	/*
		Usage1 : distinguish between member variable and parameter.
	*/



	BOOK& SelfReference() {
		return *this;
	}
	BOOK* SelfAddress() {
		return this;
	}
	/*
		Usage2 : return class-self or class-self Address (pointer)
	*/
};

int main() {
	BOOK book;
	book.init("Hello", "World", 256);
	cout << book.title << " " << book.author << " " << book.SelfReference().page << endl;
	cout << book.SelfAddress() << endl;
	return 0;
}