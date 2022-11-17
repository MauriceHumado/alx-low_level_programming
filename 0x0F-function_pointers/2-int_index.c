#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: A pointer to array
 * @size: Size of the array
 * @cmp: cmp(function) to compare the elements throw array
 * Return: index of first element when cmp function doesnt return 0;
 * else -1 if no elements matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
