#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints 0 to 9
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);
	}
	putchar('\n');
}
