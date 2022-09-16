#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
