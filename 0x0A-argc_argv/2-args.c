#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argc parameter
 * @argv: argv parameter
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv index %d is = %s\n", i, argv[i]);
	}
	return (0);
}
