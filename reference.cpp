#include<iostream>
using namespace std;
int main() {

	int alpha = 30;
	int x = 10; //varialbe define
	int& y = x; //reference define
				//y is reference, not &y.
				//now, y always indicate x (Immutable)

	cout << "x : " << x << ", y : " << y << endl;
	y = alpha; y++;
	cout << "x : " << x << ", y : " << y << endl;
	cout << "Address of x : " << &x << ", Address of y : " << &y;

	return 0;
}