#pragma once

class myString
{
public:
	myString() {};
	myString(char * f);

	int length();
	bool index();
	bool compare(myString, myString);
private:
	char * m_Word; //72, 101, 108, 108, 111
	//char * m_second = { "Byeez" }; //66, 121, 101, 101, 122
};