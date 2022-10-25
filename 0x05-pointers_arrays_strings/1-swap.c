#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: an integer pointer input
 * @b: an integer pointer input
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b - swap;
}
