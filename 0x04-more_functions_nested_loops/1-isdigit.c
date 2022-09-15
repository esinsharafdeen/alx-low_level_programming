#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks if a character is a digit or not
 *
 * @c: integer to check for
 * Return: return 1 if c is digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
