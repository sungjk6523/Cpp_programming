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
	BOOK(int price, string place, string title, string author); //�μ��� ���� ���
	*/
	BOOK() { //�Լ� �����ε��� ���� ���
		price = 1000;
		place = "KOREA";
		title = "title";
		author = "author";
	}
};


/*
BOOK::BOOK(int price = 1000, string place = "KOREA", string title = "NONE", string author = "NONE") { //�μ��� ���� ���
	this->price = price;
	this->place = place;
	this->title = title;
	this->author = author;
}
*/

int main() {

	BOOK web_book; //�Ͻ���
	BOOK *ptr_book = new BOOK; //�Ͻ���
	BOOK e_book = BOOK(); //�����

	cout << web_book.title << endl;
	cout << ptr_book->title << endl;
	cout << e_book.author << endl;

}