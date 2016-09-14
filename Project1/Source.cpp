#include <iostream>
class Dog;

class Dog
{
public:
	Dog() {};
	Dog(int age, char * name)
	{
		m_age = age;
		m_name = name;
	}
private:
	int m_age;
	char * m_name;
};
void swap(Dog&, Dog&);

int main()
{
	Dog BarkLee = { 24, "Bark Lee" };
	Dog Spark = { 56, "Spark" };
	Dog arrayDog[2] = { BarkLee, Spark };
	Swap(arrayDog[0], arrayDog[1]);
	system("pause");
	return 0;
}

void Swap(Dog &one, Dog &two)
{
	Dog tmp = one;
	one = two;
	two = tmp;
}