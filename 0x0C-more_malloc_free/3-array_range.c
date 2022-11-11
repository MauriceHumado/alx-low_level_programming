#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - Creates an array of integers
 * @min: minimum number to start
 * @max: maximum number
 * Return: pointer to the newly created array, else NULL if fail or min > max
 */

int *array_range(int min, int max)
{
	int *array, index;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(*array));

	if (array == NULL)
		return (NULL);

	for (index = 0; index <= max; index++, min++)
		array[index] = min;

	return (array);
}
