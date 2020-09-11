#include<iostream>
using namespace std;

double Multi(double x, double y = 1, double z = 1) { // Only can be right side
	return x * y * z;
}

int main() {

	cout << Multi(5, 2, 3) << endl;
	cout << Multi(5, 2) << endl;
	cout << Multi(5) << endl;

	return 0;
}