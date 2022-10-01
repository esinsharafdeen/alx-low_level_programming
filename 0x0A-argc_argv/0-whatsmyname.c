#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: argc parameter
 * @argv: argv parameter
 * Return: returns 0 for success
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
