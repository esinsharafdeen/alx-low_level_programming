#include "main.h"
/**
 * _strpbrk - searches a string any of a set of bytes
 * @s: arguement
 * @accept: arguement
 * Return: returns a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
