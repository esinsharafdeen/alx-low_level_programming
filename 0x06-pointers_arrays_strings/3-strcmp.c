#include "main.h"
/**
*_strcmp - compares pointers to two strings
*@s1: A pointer to the first string for comparism
*@s2: A pointer to the second string
*Return: returns 0 if s1 == s2
*        returns negative number if s1 < s2
*        returns positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
