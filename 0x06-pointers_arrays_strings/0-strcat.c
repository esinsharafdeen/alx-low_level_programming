#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two string
 * @src: the string to be concatenated
 * @dest: the string to be appended to
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
