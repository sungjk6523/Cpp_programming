#include"namespace.h"
#include<iostream>

using sung::display; //namespace declaration

int main() {

	sung::display();
	std::cout << sung::count << std::endl;
	
	kim::display();
	std::cout << kim::count << std::endl;

	display(); //namespace declaration

	return 0;
}