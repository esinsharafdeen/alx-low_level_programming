#include <stdio.h>

/**
 * main - prints prime numbers
 * Return: 0.
 */

int main(void)
{
	long number = 612852475143;
	long divisor = 2;
	long lrg_prime = 0;

	while (number != 1)
	{
		if (number % divisor == 0)
		{
			number = number / divisor;
			lrg_prime = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", lrg_prime);
	return (0);

