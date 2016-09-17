#pragma once



class MyString
{
public:
	MyString() {};
	MyString(const char * f);
	//int strLength(char *str);
	int getLength();
	char index(int);
	bool compare(MyString s);
	void append(MyString s);
	void prepend(MyString s);
	bool ToUpper();
	bool ToLower();
	bool findSubString();
	int findSubString(const char *c);
	char * setString();
	void setString(char[]);
	bool findSubStringIndex(int, char *);
	const char * constCStyle();
	void Replace();
	int Replace(char *, char *);
private:
	char m_Data[255]; 
	int m_length;
};