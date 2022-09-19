#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - updates value to 98
 * @n:pointer parameter
 * Return: Nothing
 */

void reset_to_98(int *n)
{
	int p;

	p = 98;
	n = &p;

	_putchar("Value of 'p' is: %d\n", p);
	_putchar("Address of 'p' is: %p\n", &p);
	_putchar("Value of 'n' is: %p\n", n);
	_putchar("Address of 'n' is: %p\n", &n);
}
