#include "main.h"
#include <stdio.h>
/**
 * _strlen - prints length of a string
 * @s: parameter
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

