#include <iostream>
void Point(int, int*);

int main()
{
	int numbers[100];
	int size = 200;
	std::cout << Point(100, numbers) << std::endl;
	system("pause");
	return 0;
}

void Point(int size, int * array)
{
	for (int i = 0; i < size; ++i)
	{
		*(array + i) = (i % 2) + i;
	}
}