#pragma once
class MyString
{
public:
	MyString() {};
	MyString(char * f);
	int getLength();
	char index(int);
	bool compare(MyString s);
	char * append(MyString s);
	char * prepend(MyString s);
	char * ToUpper();
	char * ToLower();
	bool findSubString();
	bool findSubString(char *c);
	char * setString();
	void setString(char[]);
	bool findSubStringIndex(int, char *);
	const char * constCStyle();
	void Replace();
	char * Replace(char *, char *);
private:
	char m_Data[255]; 
	int m_length;
};