/* 
	There is two different type getline() function in C++ 
	One is in <string>, which use string type variable.
	another is in <iostream>, which use char-array type variable. 
*/

#include<iostream>
#include<string>
using namespace std;
int main() {
	
	//
	cout << "Using string" << endl;
	string name, age;
	cout << "Name : ";
	getline(cin, name);
	cout << "Age : ";
	getline(cin, age);
	cout << name << " is a " << age << " years old." << endl;
	//

	//
	cout << endl << "Using array" << endl;
	char Name[21];
	char Age[4];
	cout << "Name : ";
	cin.getline(Name, 21);
	cout << "Age : ";
	cin.getline(Age, 4);
	cout << Name << " is a " << Age << " years old." << endl;
	//

	return 0;
}