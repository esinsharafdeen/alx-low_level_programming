#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);
	}
	for (cha = 'A'; cha <= 'Z'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
