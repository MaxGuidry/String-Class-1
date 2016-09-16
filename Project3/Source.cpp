#include <iostream>
void Point(int, int*);

int main()
{
	int size = 20;
	int numbers[20];
	Point(size, numbers);
	system("pause");
	return 0;
}

void Point(int size, int * array)
{
	int in = 0;
	for (int i = 2; i <= 2 * size; i += 2)
	{
		*(array + in) = i;
		in++;
		std::cout << "\n" << i << std::endl;
	}
}