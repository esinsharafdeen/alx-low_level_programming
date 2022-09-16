#include "main.h"
#include <stdio.h>

/**
 * mul - multiplies two numbers
 * @a: integer to multiply
 * @b: integer to multiply
 * Return: Always 0
 */

int mul(int a, int b)
{

	putchar("Enter first number:\n");
	scanf("%d", &a);
	putchar("Enter second number:\n");
	scanf("%d", &b);
	putchar("%d * %d\n", a, b);
	return (0);
}
