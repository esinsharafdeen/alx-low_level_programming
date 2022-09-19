#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps two integer
 * @a: parameter a
 * @b: parameter b
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
