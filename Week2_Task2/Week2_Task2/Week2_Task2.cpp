#include <iostream>

int main()
{
	bool a = false;
	bool b = true;

	int num1 = 12;
	int num2 = 5;
	int num3 = 7;

	if (a)
	{
		num1 += 10;
		num2 += 5;
	}
	else if (b)
	{
		num1++;
		num3 += 20;
	}
	else if (!a && !b)
	{
		num1--;
		num2--;
		num3--;
	}
	num3 *= 2;

	std::cout << "num1: " << num1 << std::endl;
	std::cout << "num2: " << num2 << std::endl;
	std::cout << "num3: " << num3 << std::endl;
}