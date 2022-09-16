#include "main.h"

/**
 * print_numbers - prints the number from 0 to 9
 * @i: variable
 * Return: Nothing
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

}
