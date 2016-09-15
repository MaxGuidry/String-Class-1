#include <iostream>
#include "MyString.h"

int strLength(char *str)
{
	int x; //Set a variable that has the default initialization
	for (x = 0;;) //Inside of the loop just make it equal 0 and loop it
	{
		if (str[x] == '\0') //Have it loop through my first word until it gets to the \0 which is the empty space after the word or the last letter
		{
			break; //Break it at that point so it does not loop forever 
		}
		x++; // Incriminate it so it goes through until it hits the \0 above
	}
	return x; //Return the x that is now equal to the number that is on \0
}

MyString::MyString(char *F)
{
	int i;
	for (i = 0; i < strLength(F); ++i)
	{
		m_Data[i] = F[i];
	}
	m_Data[i] = '\0';
}
int MyString::length() // Problem 1
{
	return strLength(m_Data);
}
void MyString::index(int input) // Problem 2
{
	std::cout << "---------------------- \n";
	std::cout << m_Data[input] << "\n"; //Have console output the word that is equal to that interger
	std::cout << "---------------------- \n";
}

bool MyString::compare(MyString str) // Problem 3
{
	/*int equal = strcmp(m_first, m_second);
	if ((equal) == 0)
	{
		printf("They are the same \n \n");
	}
	else
	{
		printf("They are not the same \n \n");
	}
	if (strcmp(m_first, m_second) == 0)
	{
		printf("%s is equal %s \n \n", m_first, m_second);
	}
	else if (strcmp(m_first, m_second) == 1)
	{
		printf("%s is after %s \n \n", m_first, m_second);
	}
	else if (strcmp(m_first, m_second) == -1)
	{
		printf("%s is before %s \n \n", m_first, m_second);
	}
	return 1;*/
	// Above is a small example
	bool equal = true;
	for (int i = 0;; i++)
	{
		equal = (m_Data[i] == str.m_Data[i]) ? true : false;
		if (equal == false)
		{
			std::cout << "They are not equal \n \n";
			break;
		}
		if (equal == true)
		{
			std::cout << "They are equal \n \n";
			break;
		}
	}
	return equal;
}

void MyString::append(MyString str) // Problem 4 
{
	int oldLength = length();

	int i;
	for (i = 0; i < str.length(); ++i)
	{
		m_Data[oldLength + i] = str.m_Data[i];
	}
	m_Data[oldLength + i] = '\0';

	for (int in = 0; m_Data[in] != '\0'; in++)
	{
		std::cout << m_Data[in];
	}
	std::cout << "\n \n";
}

void MyString::prepend(MyString str) // Problem 5
{
	char newString[255];

	int i;
	for (i = 0; i < str.length(); ++i)
	{
		newString[i] = str.m_Data[i];
	}
	newString[i] = '\0';

	int oldLength = strLength(newString);

	for (i = 0; i < length(); ++i)
	{
		newString[oldLength + i] = m_Data[i];
	}

	newString[oldLength + i] = '\0';

	for (i = 0; i < strLength(newString); ++i)
	{
		m_Data[i] = newString[i];
	}
	m_Data[i] = '\0';

	for (int in = 0; m_Data[in] != '\0'; in++)
	{
		std::cout << m_Data[in];
	}
	std::cout << "\n \n";
}

bool MyString::uppercase() //Problem 7
{
	for (int x = 0; x < length(); x++)
	{
		if ((int)m_Data[x] > 96 && (int)m_Data[x] < 123)
		{
			m_Data[x] = m_Data[x] - 32;
		}
		std::cout << m_Data[x];
	}
	std::cout << "\n \n";
	return false;
}

bool MyString::lowercase() //Problem 8
{
	for (int x = 0; x < length(); x++)
	{
		if ((int)m_Data[x] > 64 && (int)m_Data[x] < 91)
		{
			m_Data[x] = m_Data[x] + 32;
		}
		std::cout << m_Data[x];
	}
	std::cout << "\n \n";
	return false;
}
