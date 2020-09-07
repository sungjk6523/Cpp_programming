#include<iostream>
using namespace std;
void xchg(int& x, int& y) { // Call by reference (C++ style)
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void xchg(int* x, int* y) { // Call by Address (C style)
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main() {

	int k = 5;
	int m = 7;

	xchg(k, m); // Call by reference (C++ style)
	cout << "k = " << k << ", m = " << m << endl;

	xchg(&k, &m); // Call by Address (C style)
	cout << "k = " << k << ", m = " << m << endl;

	return 0;
}