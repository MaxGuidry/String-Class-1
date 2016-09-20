#pragma once
class MyString
{
public:
	MyString() {};
	MyString(char * f);
	int getLength();
	//        Prototype: getLength (No arguments)
	//        Description: Returns the instance of m_length that was set in MyString.
	//        Precondition: None
	//        Postcondition: 
	//        Visibility: Public

	char index(int);
	//        Prototype: index (int input)
	//        Description: Takes in the char m_Data with paramater input then returns it.
	//        Precondition: Must have an index
	//        Postcondition:  
	//        Visibility: Public

	bool compare(MyString s);
	//        Prototype: compare (MyString str)
	//        Description: Comapares each character that is inside of each string to check if they are equal.
	//        Precondition: Must have two strings 
	//        Postcondition:  
	//        Visibility: Public

	char * append(MyString s);
	//        Prototype: append (MyString str)
	//        Description: Appends MyString to paramaters that are passed in Main.cpp.
	//        Precondition: Must have two strings
	//        Postcondition:  
	//        Visibility: Public

	char * prepend(MyString s);
	//        Prototype: prepend (MyString str)
	//        Description: Prepends "Front -> " which is passed in my Main.cpp on to the previous appended word.
	//        Precondition: Must have two strings
	//        Postcondition:  
	//        Visibility: Public

	char * ToUpper();
	//        Prototype: ToUpper (No arguments)
	//        Description: Uppercasses every character in the prepended word above.
	//        Precondition: None 
	//        Postcondition:  
	//        Visibility: Public

	char * ToLower();
	//        Prototype: ToLower (No arguments)
	//        Description: Lowercasses every character in the prepended word above.
	//        Precondition: None 
	//        Postcondition:  
	//        Visibility: Public

	bool findSubString(); //Example.Does not work

	bool findSubString(char *c);
	//        Prototype: findSubString (char * sub)
	//        Description: Using a bool, search for a certain character inside of the string if found return true, if not return false. 
	//        Precondition: Must be passed a char *
	//        Postcondition:  
	//        Visibility: Public

	bool findSubStringIndex(int, char *);
	//        Prototype: findSubStringIndex (int input ,char * sub)
	//        Description: Using a bool, goes to a pre set index and searches for a character if found return true, if not return false.
	//        Precondition: Must be passed a input and char * 
	//        Postcondition:  
	//        Visibility: Public

	const char * constCStyle();
	//        Prototype: constCStyle (No arguments)
	//        Description: Sets m_Data to now equal a const char * then return that variable that was set to the const char *.
	//        Precondition: None 
	//        Postcondition:  
	//        Visibility: Public

	void Replace(); //Example.Does not work

	char * Replace(char *, char *);
	//        Prototype: Replace (char * mine, char * sub)
	//        Description: Searches the string for a pre set character which is set in parameters in the Main.cpp then swaps in with another character that is also in the same parameter.
	//        Precondition: Must be passed two char *
	//        Postcondition:  
	//        Visibility: Public
private:
	char m_Data[255]; 
	int m_length;
};