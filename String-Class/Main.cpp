#include <iostream>
#include "MyString.h"

int main()
{
	printf("Enter a word then press enter (x2) \n");
	char f[255];
	char s[255];
	std::cin.getline(f, 255);
	std::cin.getline(s, 255);
	MyString firstString = MyString(f);
	MyString secondString = MyString(s);
	system("cls");
	for (int i = 0; i < 62; i++)
	{
		std::cout << (char)22;
	}
	std::cout << "\n";
	std::cout << "Length of first word: " << firstString.getLength() << "\n";
	std::cout << "Length of second word: " << secondString.getLength() << "\n";
	std::cout << "Const char *: " << firstString.constCStyle() << "\n \n";
	std::cout << "There is an 'a' in word: ";
	(firstString.findSubString("a") == 1) ? std::cout << "True \n" : std::cout << "False \n";
	std::cout << "'a' = index (2): " << firstString.findSubStringIndex(2, "a") << "\n";
	std::cout << "Replacing all 'a's with 'A's: " << firstString.Replace("a", "A") << "\n \n";
	std::cout << "Print at Index (2): " << firstString.index(2) << "\n";
	std::cout << "Compare: ";
	(firstString.compare(secondString) == 1) ? std::cout << "They are the same word \n" : std::cout << "They are not the same word \n";
	std::cout << "Appended word: " << firstString.append(" <- Back") << "\n \n";
	std::cout << "Prepended word: " << firstString.prepend("Front -> ") << "\n";
	std::cout << "Uppercase: " << firstString.ToUpper() << "\n";
	std::cout << "Lowecase: " << firstString.ToLower() << "\n";
	for (int i = 0; i < 62; i++)
	{
		std::cout << (char)22;
	}
	std::cout << "\n";
	system("pause");
	return 0;
}
