#include <stdio.h>
/**
 * numLength - Finds and prints the first 98 Fibonacci numbers
 * @num: operand number
 * Return: Digit numbers
 */
int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}
