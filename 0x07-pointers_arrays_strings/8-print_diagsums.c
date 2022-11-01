#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a: matrix to be summed
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum, sqr;

	i = 0;
	sum = 0;
	sqr = size * size;

	while (i < sqr)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);
}
