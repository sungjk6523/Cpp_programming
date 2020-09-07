#include<iostream>
using namespace std;

void print_a() {
	cout << "a" << endl;
}
void print_b() {
	cout << "b" << endl;
}
void print_c() {
	cout << "c" << endl;
}

void print_with_parameter(void(*func)()) {
	cout << "function ptr - ";
	func();
}

int main() {
	
	void (*func_ptr1)() = NULL; //function ptr define 1
	func_ptr1 = print_a;        //

	typedef void(*func_ptr)(); //
	func_ptr func_ptr2 = NULL; //function ptr define 2
	func_ptr2 = print_b;       //

	auto func_ptr3 = print_c; //function ptr define 3
	
	print_with_parameter(func_ptr1);
	print_with_parameter(func_ptr2);
	print_with_parameter(func_ptr3);

	return 0;
}