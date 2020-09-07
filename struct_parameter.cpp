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
	Book web_book = { "HTML�� CSS", "ȫ�浿", 28000 };
	Display(web_book); //call by reference
	web_book = { "JAVA�� ��ü����", "�Ӳ���", 48000 };
	Display(&web_book); //call by address
	return 0;
}

void Display(const Book& book){
	cout << "å�� ������ \"" << book.title << "\"�̰�, ";
	cout << "���ڴ� " << book.author << "�̸�, ";
	cout << "������ " << book.price << "���Դϴ�." << endl;
}

void Display(const Book* book) {
	cout << "å�� ������ \"" << book->title << "\"�̰�, ";
	cout << "���ڴ� " << book->author << "�̸�, ";
	cout << "������ " << book->price << "���Դϴ�." << endl;
	// (*book).title [is equal with] book->title
}