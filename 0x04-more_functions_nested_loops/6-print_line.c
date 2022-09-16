#include "main.h"

/**
*print_line - prints a line
*@n: variable integer
*Return: Always 0.
*/

void print_line(int n)
{
	int x = 0;

	while (x < n && n > x)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}

