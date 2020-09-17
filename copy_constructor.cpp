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
	CLASS(const CLASS& original);
};

CLASS::CLASS(const CLASS& original) { // copy structor
	a = original.a;
	b = original.b;
}


int main() {

	CLASS classA;
	CLASS classB(classA); //±Ì¿∫ ∫πªÁ

	cout << "classA(a): " << classA.a << "classA(b): " << classA.b << endl;
	cout << "classB(a): " << classB.a << "classB(b): " << classB.b << endl;

	return 0;
}