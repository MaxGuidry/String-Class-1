#pragma once

int strLength(char *str);

class MyString
{
public:
	MyString() {};
	MyString(char * f);

	int length();
	void index(int);
	bool compare(MyString s);
	void append(MyString s);
	void prepend(MyString s);
	bool uppercase();
	bool lowercase();
private:
	char m_Data[255]; //72, 101, 108, 108, 111
	//char * m_second = { "Byeez" }; //66, 121, 101, 101, 122
};