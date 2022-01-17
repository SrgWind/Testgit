#include <iostream>

float sqrt(int num)
{
	num = num / 2;
	return num;
}

int pow(int num)
{
	num = num * num;
	return num;
}

int powChoice(int num)
{
	int powNum;
	std::cout << "Выберите степень числа:";
	std::cin >> powNum;
	int numTwo = num;

	for (int i = 1; i < powNum; i++)
	{
		num = num * numTwo;
	}

	return num;
}

bool integer(float num)
{
	int numTwo = num;
	if (num == numTwo)
		return true;
	else
		return false;

}