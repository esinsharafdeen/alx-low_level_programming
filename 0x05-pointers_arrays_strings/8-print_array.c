#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of intege
 * @a: parameter one
 * @n: parameter two
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf('\n');
}
