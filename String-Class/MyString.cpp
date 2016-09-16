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

MyString::MyString(char *F) //Constructor definition sets the valuue of the string
{
	int i;
	for (i = 0; F[i] != '\0'; ++i) //Loops array and sets values, stops when it reaches null ( End of word )
	{
		m_Data[i] = F[i];
	}
	m_Data[i] = '\0';
}
// Problem 1
int MyString::length() 
{
	return strLength(m_Data); // Calls Length which I set above 
}

//Problem 2
//Functions name: index
//Takes a single argument of type interger
//Takes in an interger which is set as "input" 
char MyString::index(int input) 
{
	std::cout << "Print at Index: " << m_Data[input] << "\n \n"; 
	return m_Data[input];
}

//Problem 3
//Functions name: compare
//Takes a single argument of type MyString
//Comapares each character that is inside of the string to check if they are equal
bool MyString::compare(MyString str) 
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
	// Above is a small example, created by Matthew Williamson
	bool equal = true;
	for (int i = 0;; i++) //Loops through the characters in the string and compares it to the second string 
	{
		equal = (m_Data[i] == str.m_Data[i]) ? true : false; //If characters are equal then variable equal with type bool is set true 
		if (equal == false) //If equal comes out false it breaks out of the loop
		{
			std::cout << "Compare: They are not equal \n \n"; //Console will state this before it breaks
			break;
		}
		if (equal == true) //If equal comes out true it breaks out of the loop
		{
			std::cout << "Compare: They are equal \n \n"; //Console will state this before it breaks
			break;
		}
	}
	return equal; //Returns the equal out to console (true/false)
}

//Problem 4 
//Functions name: append
//Takes a single argument of type MyString
//Appends the second string to first string
void MyString::append(MyString str) 
{
	int oldLength = length(); //Creates a variable called oldLength with type interger that is now equal to the length
	int i;
	for (i = 0; i < str.length(); ++i) //Loops through the second word entered until it hits the end of the word 
	{
		m_Data[oldLength + i] = str.m_Data[i]; //Sets the second word to now append to the first
	}
	m_Data[oldLength + i] = '\0'; //Ends loop once it hits end of string 
	std::cout << "Append: ";
	for (int in = 0; m_Data[in] != '\0'; in++) //Loop prints the new string which is the two appended
	{
		std::cout << m_Data[in];
	}
	std::cout << "\n \n";
}

//Problem 5
//Functions name: prepend
//Takes a single argument of type MyString
//Prepends the second string to the appended string above 
void MyString::prepend(MyString str) 
{
	char newString[255]; //The array of characters that will copy the current string

	int i;
	for (i = 0; i < str.length(); ++i) //Loops through the second word entered until it hits the end of the word
	{
		newString[i] = str.m_Data[i]; 
	}
	newString[i] = '\0'; //Ends loop once it hits end of string 

	int oldLength = strLength(newString);

	for (i = 0; i < length(); ++i) //Moves the current first string
	{
		newString[oldLength + i] = m_Data[i];
	}
	newString[oldLength + i] = '\0'; //Ends loop once it hits end of string 

	for (i = 0; i < strLength(newString); ++i) //Places the second string in front of the first string
	{
		m_Data[i] = newString[i];
	}
	m_Data[i] = '\0'; //Ends loop once it hits end of string 
	std::cout << "Prepend: ";
	for (int in = 0; m_Data[in] != '\0'; ++in) //Loops to print new string below
	{
		std::cout << m_Data[in];
	}
	std::cout << "\n \n";
}

//Problem 6
//Functions name: constCStyle
//Does not take in any arguemnt
//Returns the string as a basic constant C-Style
const char * MyString::constCStyle() //Problem 6
{
	const char * constCString = m_Data;
	std::cout << "Const Char *: " << constCString << "\n \n";
	return constCString;
}

//Problem 7
//Functions name: uppercase
//Does not take in any arguemnt
//makes all letters uppercase in the string
bool MyString::uppercase() //Problem 7
{
	std::cout << "UpperCase: ";
	for (int i = 0; i < length(); ++i)
	{
		if ((int)m_Data[i] > 96 && (int)m_Data[i] < 123) //Uses the Ascii Table to check if each character is lowercase or not
		{
			m_Data[i] = m_Data[i] - 32; //If they are then change its integer value to Ascii Tables value for uppercase
		}
		std::cout << m_Data[i]; //Prints the brand new string
	}
	std::cout << "\n \n";
	return false;
}

//Problem 8
//Functions name: lowercase
//Does not take in any arguemnt
//Makes all letters lowercase in the string
bool MyString::lowercase() //Problem 8
{
	std::cout << "LowerCase: ";
	for (int i = 0; i < length(); ++i)
	{
		if ((int)m_Data[i] > 64 && (int)m_Data[i] < 91) //Uses the Ascii Table to check if each character is uppercase or not
		{
			m_Data[i] = m_Data[i] + 32; //If they are then change its integer value to Ascii Tables value for lowercase
		}
		std::cout << m_Data[i]; //Prints the brand new string
	}
	std::cout << "\n \n";
	return false;
}

//Problem 9
//Functions name: findSubString
//Does not take in any arguemnt
//Searches the string for characters
bool MyString::findSubString() //Problem 9 
{
	bool found = false;
	const char * sub = { "ee" }; //The charcters I set to be searched for
	int x = 0;
	for (int i = 0; i < length(); ++i)
	{
		if (m_Data[i] == sub[x]) //Checks if the characters at index [i] are the same
		{
			x++;
			if (x == 2); //Checks if x == 2 if it is the value of found is now true
			{
				found = true;
				break;
			}
		}
		else //Or if it is not the value is now 0 and found is now false
		{
			x = 0;
			found = false;
		}
	}
	std::cout << "SubString: " << found << "\n \n";
	return found;
}

//Problem 10
//Functions name: findSubStringIndex
//Takes a single argument of type interger
//Searches the string for characters starting at a index
bool MyString::findSubStringIndex(int input) //Problem 10
{
	bool foundIndex = false;
	const char * subString = { "eel" };
	int x = 0;
	for (int i = 0 + input; i < length(); ++i)
	{
		if (m_Data[i] == subString[x])
		{
			x++;
			if (x == 2);
			{
				foundIndex = true;
				break;
			}
		}
		else
		{
			foundIndex = false;
		}
	}
	std::cout << "SubString at Index: " << foundIndex << "\n \n";
	return foundIndex;
}
//Problem 11
//Functions name: replaceSubString
//Does not take in any arguemnt
//Searches the string for characters and if found said characters replaces them 
void MyString::replaceSubString() //Problem 11
{
	bool foundReplace;
	const char * subString = { "xx" };
	const char * replaceSubString = { "ll" };
	int x = 0;
	for (int i = 0; i < length(); ++i)
	{
		if (m_Data[i] == subString[x])
		{
			x++;
			if (x == 2)
			{
				foundReplace = true;
				for (int i = 0; i < length(); ++i)
				{
					if (m_Data[i] == subString[x])
					{
						m_Data[i] = replaceSubString[x];
						x++;
					}
					else
					{
						x = 0;
					}
				}
				break;
			}
		}
		else
		{
			foundReplace = false;
			x = 0;
		}
	}
	x = 0;
	std::cout << "Replace SubString: ";
	for (int i = 0; m_Data[i] != '\0'; ++i)
	{
		std::cout << m_Data[i];
	}
	std::cout << "\n \n";
}

//Problem 12 
//Functions name: getString
//Does not take in any arguemnt
//Gets the string from a users input
char * MyString::setString() 
{
	char set[255];
	int i;
	std::cin.getline(set, 255);
	return set;
}

