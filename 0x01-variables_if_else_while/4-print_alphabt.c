#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets
 * Return: Always 0 (success)
 */
int main(void)
{
	int cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		if (cha != 'e' && cha != 'q')
		{
			putchar(cha);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
