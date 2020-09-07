#include<iostream>
#include<string>
using namespace std;

int main() {

	//length, size
	cout << "[ length, size ]" << endl;
	string str = "ABCDEF";
	cout << "length : " << str.length() << endl;  
	cout << "size : " << str.size() << endl << endl;      
	/*
		-Reference-
		As per the documentation, these are just synonyms. 
		size() is there to be consistent with other STL containers (like vector, map, etc.) and 
		length() is to be consistent with most peoples' intuitive notion of character strings. 
		People usually talk about a word, sentence or paragraph's length, not its size, 
		so length() is there to make things more readable
	*/


	//append
	cout << "[ append ]" << endl;
	string str1, str2, str3;
	cout << str1.append("C++ Programming") << endl;
	cout << str2.append("C++ Programming", /* start */4, /* count */7) << endl;
	cout << str3.append(/* time */4, 'X') << endl << endl;


	//find
	cout << "[ find ]" << endl;
	str = "C++ Programming";
	cout << str.find("Pro") << endl;
	cout << str.find('r') << endl;
	if (str.find("Pro", 5) != string::npos)
		cout << "�ش� ���ڿ��� ã�ҽ��ϴ�." << endl << endl;
	else
		cout << "�ش� ���ڿ��� ã�� ���߽��ϴ�." << endl << endl;


	//compare
	cout << "[ compare ]" << endl;
	str1 = "ABC";
	str2 = "ABD";
	if (str1.compare(str2) == 0)
		cout << str1 << "�� " << str2 << "�� �����ϴ�.";
	else if (str1.compare(str2) < 0)
		cout << str1 << "�� " << str2 << "���� ���� ���� ������ �տ� �ֽ��ϴ�." << endl << endl;
	else
		cout << str1 << "�� " << str2 << "���� ���� ���� ������ �ڿ� �ֽ��ϴ�." << endl << endl;


	//replace
	cout << "[ replace ]" << endl;
	str1 = "C++ is very nice!";
	str2 = "nice";
	str3 = "awesome";
	string::size_type index = str1.find(str2);
	/*
		-Reference-
		none of those types are guaranteed to be large enough to represent the sizes of any strings.
		string::size_type guarantees just that. 
		It is a type that is big enough to represent the size of a string, no matter how big that string is.
		For a simple example of why this is necessary, consider 64-bit platforms. 
		An int is typically still 32 bit on those, but you have far more than 2^32 bytes of memory.
		So if a (signed) int was used, you'd be unable to create strings larger than 2^31 characters. 
		size_type will be a 64-bit value on those platforms however, so it can represent larger strings without a problem.
	*/
	if (index != string::npos)
		str1.replace(/*start*/index, /*count*/str2.length(), str3);
	cout << str1 << endl << endl;
	


	//capacity, max_size
	cout << "[ capacity, max_size ]" << endl;
	str = "C++ Programming";
	cout << "���ڿ� str�� length�� " << str.length() << "�Դϴ�." << endl;
	cout << "���ڿ� str�� capacity�� " << str.capacity() << "�Դϴ�." << endl;
	cout << "���ڿ� str�� max_size�� " << str.max_size() << "�Դϴ�." << endl;
	return 0;
}
