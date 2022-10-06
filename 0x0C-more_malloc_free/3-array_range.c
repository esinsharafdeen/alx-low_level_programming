#include "main.h"
#include < stdlib.h>

/**
 * array_range - creates an array of integer
 * @min: The first value of the array
 * @max: The last value of the array
 * Return: if min > max or the function fails - NULL
 * Otherwise - a pointer to the newly createsd array
 */

array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
