#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: contains value to be compared
 * Return: Alway 0.
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
