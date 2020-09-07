/*
	Unlike C, C++ support "string" object.
	It makes easy to address string compared to C
*/

#include<iostream>
#include<string>
using namespace std;
int main() {

	string Dog_name;
	string Dog_alias;

	Dog_name = "Navi";
	Dog_alias = "QWERTY";
	cout << "Dog name : " << Dog_name << endl;
	cout << "Dog alias : " << Dog_alias << endl;
	
	Dog_alias = Dog_name; // '=' operator could be used
	cout << "Dog alias : " << Dog_alias << endl;

	Dog_alias = Dog_name + Dog_name; // '+' operator could be used
	cout << "Dog alias : " << Dog_alias << endl;

	return 0;
}