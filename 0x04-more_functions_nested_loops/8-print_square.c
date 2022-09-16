#include "main.h"

/**
 * print_square - prints a square
 * @i: number of lines to be printed
 * Return: Void
 */

void print_square(int i)
{
	int a = 0, b;

	while (a < i && i > 0)
	{
		b = 0;
		while (b < i)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
