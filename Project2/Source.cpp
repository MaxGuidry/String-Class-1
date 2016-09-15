#include <iostream>

float morning(float, float, float);

int main()
{
	float a;
	float b;
	float c;
	std::cin >> a >> b >> c;
	std::cout << morning(a, b, c);
	system("pause");
	return 0;
}

float morning(float a, float b, float c)
{
	float sum = a + b + c;
	return sum * 5;
}