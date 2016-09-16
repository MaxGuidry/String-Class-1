#include <iostream>
#include "MyString.h"

int main()
{
	printf("Enter words.. \n \n");
	char f[255];
	char s[255];
	std::cin.getline(f, 255);
	std::cin.getline(s, 255);
	MyString firstString = MyString(f);
	MyString secondString = MyString(s);
	/*int buttF = firstString.length();
	int buttS = secondString.length();
	std::cout << "Length of first word: " << buttF << "\n \n";
	std::cout << "Length of second word: " << buttS << "\n \n";*/
	int input = 2;
	firstString.constCStyle();
	firstString.findSubString();
	firstString.findSubStringIndex(input);
	firstString.replaceSubString();
	firstString.index(input);
	firstString.compare(secondString);
	firstString.append("<-Back");
	firstString.prepend("Front->");
	firstString.ToUpper();
	firstString.ToLower();
	system("pause");
	return 0;
}
