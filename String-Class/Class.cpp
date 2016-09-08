#include <iostream>
#include "Header.h"

stringClass::stringClass(const char * &f, const char * &s)
{
	f = m_first;
	s = m_second;
}

int stringClass::length()
{
	int x;
	for (x = 0;;)
	{
		if (m_first[x] == '\0')
		{
			break;
		}
		x++;
	}
	int firstlength = x;

	int i;
	for (i = 0;;)
	{
		if (m_second[i] == '\0')
		{
			break;
		}
		i++;
	}
	int secondlength = i;
	std::cout << x << " , " << i;
	return 
}