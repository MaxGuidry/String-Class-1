#include <iostream>
#include "Header.h"

int main()
{
	myString Hello = myString("Hello");
	myString Byeez = myString("Byeez");
	int buttF = Hello.length();
	int buttS = Byeez.length();
	std::cout << buttF << "\n \n";
	std::cout << buttS << "\n \n";
	Hello.index();
	int size = Hello.compare(Hello, Byeez);
	std::cout << size << "\n";
	system("pause");
	return 0;
}
