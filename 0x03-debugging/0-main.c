#include "main.h"

/**
* positive_or_negative - Finds positive or negative numbers
*
* @i: The int to print
* Return: 0
*/

void positive_or_negative(int i)
{
	int i;

	i = 98;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}

	return (0);
}
