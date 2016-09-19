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
	firstString.constCStyle();
	firstString.findSubString();
	std::cout << firstString.findSubStringIndex(2, "kill");
	std::cout << firstString.Replace("aa", "A") << "\n \n";
	std::cout << "Print at Index: " << firstString.index(2) << "\n \n";
	firstString.compare(secondString);
	firstString.append("<-Back");
	firstString.prepend("Front->");
	firstString.ToUpper();
	firstString.ToLower();
	system("pause");
	return 0;
}
