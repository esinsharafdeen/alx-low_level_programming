#include "main.h"

/**
 * * _strchr - main file
 * @s: input variable
 * @c: input variable
 * Return: returns a pointer to the character c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}

