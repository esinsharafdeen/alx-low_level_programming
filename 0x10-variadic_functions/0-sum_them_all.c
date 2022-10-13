#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameter
 * @n: Number of parameters passed to the function
 * @...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0, 0. Otherwise, sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int index, sum = 0;

	va_start(args, n);

	for (index = 0; index < n; index++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
