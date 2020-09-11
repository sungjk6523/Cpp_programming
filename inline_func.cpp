#include<iostream>
using namespace std;
/*
	use like macro function in C
*/
inline int sub(int x, int y) { return x - y; }

int main() {

	cout << sub(7, 5) << endl;

	return 0;
}

