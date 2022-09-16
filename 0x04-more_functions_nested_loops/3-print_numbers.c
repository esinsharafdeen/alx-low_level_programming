#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints 0 to 9
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
