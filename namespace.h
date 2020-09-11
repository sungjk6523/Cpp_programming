/*
	Namespace란?
	: C++에서 내부 식별자에 사용될 수 있는 유효 범위를 제공하는 선언적 영역
*/
#include<iostream>

namespace sung {
	void display() {
		std::cout << "sung" << std::endl;
	}
	int count = 22;      
}

namespace kim {
	void display() {
		std::cout << "kim" << std::endl;
	}
	int count = 43;
}