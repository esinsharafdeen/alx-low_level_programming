
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (success)
 */
int main(void)
{
	int cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
