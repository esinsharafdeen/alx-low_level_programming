#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string in which its lengtth is to be return
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
