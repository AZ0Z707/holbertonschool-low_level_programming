#include "main.h"
#include <stdlib.h>
#include <stdint.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	size_t size, i;

	if (min > max)
		return (NULL);

	size = (size_t)((int64_t)max - (int64_t)min) + 1;

	if (size > SIZE_MAX / sizeof(int))
		return (NULL);

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = (int)((int64_t)min + (int64_t)i);

	return (array);
}
