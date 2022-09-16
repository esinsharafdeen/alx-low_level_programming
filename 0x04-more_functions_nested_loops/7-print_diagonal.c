#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: parameter
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int len = 0;
	int space;

	while (len < n && n > 0)
	{
		space = 0;
		while (space  < len)
		{
			_putchar(' ');
			space++;
		}

		_putchar('\\');
		_putchar('\n');
		len++;
	}
	if (len == 0)
		_putchar('\n');
}

