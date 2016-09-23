#include <iostream>
#include "MyString.h"
MyString::MyString(char *F) //Constructor definition sets the valuue of the string
{
	int i;
	for (i = 0; F[i] != '\0'; ++i) //Loops array and sets values, stops when it reaches null ( End of word )
	{
		m_Data[i] = F[i]; //F populates the array of m_Data
						  //Ends loop once reaches null
	}
	m_Data[i] = '\0'; //Sets end of array to null
	m_length = i;
}

// Problem 1
int MyString::getLength()
{
	return m_length;
}

//Problem 2
//Functions name: index
//Takes a single argument of type interger
//Takes in an interger which is set as "input" 
char MyString::index(int input)
{
	m_Data[input];
	return m_Data[input];
}

//Problem 3
//Functions name: compare
//Takes a single argument of type MyString
//Comapares each character that is inside of the string to check if they are equal
bool MyString::compare(MyString str)
{
	bool equal = true;
	for (int i = 0;; i++) //Loops through the characters in the string and compares it to the second string 
	{
		equal = (m_Data[i] == str.m_Data[i]) ? true : false; //If characters are equal then variable equal with type bool is set true 
		if (equal == false) //If equal comes out false it breaks out of the loop
		{
			break;
		}
		if (equal == true) //If equal comes out true it breaks out of the loop
		{
			break;
		}
	}
	return equal; //Returns the equal out to console (true/false)
}

//Problem 4 
//Functions name: append
//Takes a single argument of type MyString
//Appends the second string to first string
char * MyString::append(MyString str)
{
	int oldLength = this->m_length; //Creates a variable called oldLength with type interger that is now equal to the length
	int i;
	for (i = 0; i < str.m_length; ++i) //Loops through the second word entered until it hits the end of the word 
	{
		m_Data[oldLength + i] = str.m_Data[i]; //Sets the second word to now append to the first
	}
	m_Data[oldLength + i] = '\0'; //Ends loop once it hits end of string
	m_length = i + oldLength;
	return m_Data;
}

//Problem 5
//Functions name: prepend
//Takes a single argument of type MyString
//Prepends the second string to the appended string above 
char * MyString::prepend(MyString str)
{
	char newString[255]; //The array of characters that will copy the current string
	int i;
	for (i = 0; i < m_length; ++i) //Loops through the second word entered until it hits the end of the word
	{
		newString[i] = m_Data[i];
	}
	newString[i] = '\0'; //Ends loop once it hits end of string 
	int oldLength = str.m_length;
	for (i = 0; i < getLength(); ++i) //Moves the current first string
	{
		m_Data[oldLength + i] = newString[i];
	}
	newString[oldLength + i] = '\0'; //Ends loop once it hits end of string 
	for (i = 0; i < str.m_length; ++i) //Places the second string in front of the first string
	{
		m_Data[i] = str.m_Data[i];
	}
	m_Data[i + m_length] = '\0'; //Ends loop once it hits end of string 
	m_length += str.m_length;
	return m_Data;
}

//Problem 6
//Functions name: constCStyle
//Does not take in any arguemnt
//Returns the string as a basic constant C-Style
const char * MyString::constCStyle()
{
	const char * constCString = m_Data;
	return constCString;
}

//Problem 7
//Functions name: uppercase
//Does not take in any arguemnt
//makes all letters uppercase in the string
char * MyString::ToUpper()
{
	for (int i = 0; i < getLength(); ++i)
	{
		if ((int)m_Data[i] > 96 && (int)m_Data[i] < 123) //Uses the Ascii Table to check if each character is lowercase or not
		{
			m_Data[i] = m_Data[i] - 32; //If they are then change its integer value to Ascii Tables value for uppercase
		}
	}
	return m_Data;
}

//Problem 8
//Functions name: lowercase
//Does not take in any arguemnt
//Makes all letters lowercase in the string
char * MyString::ToLower()
{
	for (int i = 0; i < getLength(); ++i)
	{
		if ((int)m_Data[i] > 64 && (int)m_Data[i] < 91) //Uses the Ascii Table to check if each character is uppercase or not
		{
			m_Data[i] = m_Data[i] + 32; //If they are then change its integer value to Ascii Tables value for lowercase
		}
	}
	return m_Data;
}
// ----------------------------------------------------------------------------NOT WORKING------------------------------------------------------------------------------------------
bool MyString::findSubString()
{
	bool found = false;
	const char * sub = { "ee" }; //The charcters I set to be searched for
	int x = 0;
	for (int i = 0; i < getLength(); ++i)
	{
		if (m_Data[i] == sub[x]) //Checks if the characters at index [i] is the same as the set characters above
		{
			x++;
			if (x == 2) //Checks if x == 2 if it is the value of found is now true
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
	return found;
}
// ----------------------------------------------------------------------------NOT WORKING------------------------------------------------------------------------------------------

//Problem 9
//Functions name: findSubString
//Does not take in any arguemnt
//Searches the string for characters
bool MyString::findSubString(char * sub) //x
{
	MyString tmp = MyString(sub);
	bool match = false;
	int x = 0;
	for (int i = 0; i < m_length; i++)
	{
		if (m_Data[i] == sub[x])
		{
			x++;
			if (x == tmp.m_length)
			{
				match = true;
				break;
			}
		}
		else
		{
			match = false;
			x = 0;
		}
	}
	return match;
}

//Problem 10
//Functions name: findSubStringIndex
//Takes a single argument of type interger
//Searches the string for characters starting at a index
bool MyString::findSubStringIndex(int input, char * sub)
{
	MyString temp = MyString(sub);
	bool foundIndex = false; //True or false to say if its starting at the certain index  
	int x = 0; //Variable x with type interger set to be a place hold for the index of the const char *
	for (int i = input; i < m_length; ++i) //Makes a type interger = to my set input and loops to end of word length
	{
		if (m_Data[i] == sub[x]) //Checks if the characters at index [i] is the same as the set characters above
		{
			x++; //Increments the x to go to next letter of string 
			if (x == temp.m_length) //Checks if x == 2 if it is the value of found is now true
			{
				foundIndex = true; //Continues the loop
				break;
			}
		}
		else //Or if it is not the value is now 0 and found is now false
		{
			x = 0;
			foundIndex = false; //Stops the loop
		}
	}
	return foundIndex;
}
// ----------------------------------------------------------------------------NOT WORKING------------------------------------------------------------------------------------------
void MyString::Replace()
{
	bool foundReplace; //True or false to say if its starting at the certain index 
	const char * subString = { "xx" }; //The characters I set to be searched for 
	const char * replaceSubString = { "ll" }; //The characters I set to replace 
	int x = 0; //Variable x with type interger set to be a place hold for the index of both subString and replaceSubString
	for (int i = 0; i < m_length; ++i) //Loops that goes through length of word 
	{
		if (m_Data[i] == subString[x]) //Checks if the characters at index [i] is the same as the subString[i]
		{
			x++; //Increments the x to go to next letter of string 
			if (x == 2) //Checks if x == 2 if it is the value of found is now true
			{
				foundReplace = true; //Continues the loop
				for (int i = 0; i < m_length; ++i) //Loops that goes through length of word 
				{
					if (m_Data[i] == subString[x]) //Checks if the characters at index [i] is the same as the subString[i]
					{
						m_Data[i] = replaceSubString[x]; //Replaces the subString with replaceSubString set string
						x++; //Increments the x to go to next letter of string 
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
			foundReplace = false; //Stops the loop
			x = 0;
		}
	}
	x = 0;
	std::cout << "Replace SubString: ";
	for (int i = 0; m_Data[i] != '\0'; ++i) //States the new word
	{
		std::cout << m_Data[i];
	}
	std::cout << "\n \n";
}
// ----------------------------------------------------------------------------NOT WORKING------------------------------------------------------------------------------------------

//Problem 11
//Functions name: replaceSubString
//Does not take in any arguemnt
//Searches the string for characters and if found said characters replaces them 
char * MyString::Replace(char * mine, char * sub)
{
	MyString m = MyString(mine);
	MyString newString = MyString(sub);
	MyString copy = MyString(m_Data);
	bool match = false;
	int p = 0;
	int follow = 0;
	int copyIn = 0;
	for (int i = 0; i < this->m_length; i++)
	{
		copyIn = follow;
		if (this->m_Data[i] == sub[0])
		{
			for (int j = 0; j < m.getLength(); j++)
			{
				if (this->m_Data[i + j] == m.m_Data[j])
				{
					match = true;
				}
				else
				{
					match = false;
				}
			}
		}
		if (this->m_Data[i] == m.m_Data[p]) //Dont know why this works 
		{
			p++;
			if (p == m.m_length)
			{
				p = 0;
				if (m.m_length <= newString.m_length)
				{
					m_length += newString.m_length - m.m_length;
				}
				else
				{
					m_length -= m.m_length - newString.m_length;
				}
				copyIn++;
				for (int j = 0; j < newString.getLength(); j++)
				{
					m_Data[(i + j) - (m.getLength() - 1)] = newString.m_Data[j];
					match = true;
				}
				if (i <= m_length - newString.m_length)
				{
					int holder = copyIn;
					for (int x = i - m.m_length + newString.m_length + 1; x < m_length; x++)
					{
						m_Data[x] = copy.m_Data[copyIn];
						copyIn++;
					}
					copyIn = holder;
				}
				if (m.m_length < newString.m_length)
				{
					i += newString.m_length - m.m_length;
				}
				else if (m.m_length > newString.m_length)
				{
					i -= m.m_length - newString.m_length;
				}
			}
		}

		else if (this->m_Data[i] != m.m_Data[0])
		{
			{
				match = false;
			}
		}
		else
		{
			match = false;
		}
		m_Data[m_length] = '\0';
		follow++;
	}
	return m_Data;
}