#include <iostream>
#include "MyString.h"

int main()
{
	MyString newString = MyString("Hello Byeez");
	int buttF = newString.length();
	std::cout << buttF << "\n \n";
	int input = 3;
	newString.index(input);
	newString.compare("Hello Byeez");
	newString.append(" Ben");
	newString.prepend("Ben ");
	newString.uppercase();
	newString.lowercase();
	system("pause");
	return 0;
}
