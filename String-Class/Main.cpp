#include <iostream>
#include "MyString.h"

int main()
{
	MyString firstString = MyString(firstString.setString());
	MyString secondString = MyString(secondString.setString());
	int buttF = firstString.length();
	int buttS = secondString.length();
	std::cout << "Length of first word: " << buttF << "\n \n";
	std::cout << "Length of second word: " << buttS << "\n \n";
	int input = 3;
	firstString.constCStyle();
	firstString.findSubString();
	firstString.findSubStringIndex(input);
	firstString.replaceSubString();
	firstString.index(input);
	firstString.compare(secondString);
	firstString.append(secondString);
	firstString.prepend(secondString);
	firstString.uppercase();
	firstString.lowercase();
	system("pause");
	return 0;
}
