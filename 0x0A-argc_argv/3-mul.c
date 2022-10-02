#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - writes a program that multiplies two numbers
 * @argc: argc parameter
 * @argv: argv parameter
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
		j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}