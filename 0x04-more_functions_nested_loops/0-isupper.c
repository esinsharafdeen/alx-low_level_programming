#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks the code
 * @c: integer to check for
 *
 * Return: Always 0.
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
