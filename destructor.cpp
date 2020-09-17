#include<iostream>

using namespace std;

class CLASS {
public:
	int a;
	float b;
	CLASS() {
		a = 5;
		b = 3.14;
	}
	~CLASS();
};

CLASS::~CLASS() { //destructor
	cout << "destructor called" << endl;
}


int main() {

	CLASS classA;
	cout << "classA(a): " << classA.a << "classA(b): " << classA.b << endl;
	
	/* destructor is automatically called. */

	return 0;
}