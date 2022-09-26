#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: variable to which memory is copied
 * @src: variable from which memory is copied
 * @n: number of memory area copied to dest from src
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i;

	for (i = n; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
