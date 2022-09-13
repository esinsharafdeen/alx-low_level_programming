#include "main"
/**
 * times_table - prints the 9 times table ,starting with 0
 * Return: Always 0.
 */

void time_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= a; b++)
		{
			c = a * b;
			if ((c / 10) == 0)
			{
				if (b == 0)
				
