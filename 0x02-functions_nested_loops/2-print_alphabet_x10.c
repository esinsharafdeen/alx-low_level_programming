#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int count = 0;

	while (count < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		_putchar('\n');

		count++;
	}
}
