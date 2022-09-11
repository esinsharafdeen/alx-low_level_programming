#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{

	char x;
	char y = '0';

	while (y <= '9')
	{
		putchar(y);
		y++;
	}
	for (x = 'e'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
