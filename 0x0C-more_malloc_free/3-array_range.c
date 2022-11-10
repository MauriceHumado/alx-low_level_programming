#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers ordered from min to max
 * @min: The first value of the array
 * @max: The last value of the array
 * Return: NULL if min > max or fail, else pointer to the newly created array
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
