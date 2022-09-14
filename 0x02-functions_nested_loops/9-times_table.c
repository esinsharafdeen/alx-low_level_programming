#include "main.h"
/**
 * times_table - prints the 9 times table ,starting with 0
 * Description: Prints the nine times table
 * Return: Always 0.
 */

void times_table(void)
{
	int r;
	int col;
	int p;
	int t;
	int ones;

	for (r = 0; r <= 9; r++)
	{
		for (col = 0; col <= 9; col++)
		{
			p = r * col;
			t = p / 10;
			ones = p % 10;

			if (col == 0)
			{
				_putchar('0');
			}
			else if (p < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(t + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}

