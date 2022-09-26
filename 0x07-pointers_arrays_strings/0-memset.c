#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the address of the memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new values
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
