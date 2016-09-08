#pragma once

class stringClass
{
public:
	stringClass() {};
	stringClass(const char * &f, const char * &s);
	int length();

private:
	const char * m_first = { "Hello" };
	const char * m_second = { "Bye" };
};