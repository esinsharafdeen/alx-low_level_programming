#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @n: the int to print
 * Return: Always 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}

	else if (n == 0)
	{
		return (0);
	}

	else
	{
		return (n);
	}
}