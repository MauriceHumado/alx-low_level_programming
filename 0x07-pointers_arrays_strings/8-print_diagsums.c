#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a: matrix to be summed
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int c = 0;
	int d = 0;

	for (i = 0; i < size; i++)
	{
		c = c + *(a + i * sizeof(int));
		c += a[i];
		d += a[size - i - 1];
		a += size;
	}

	for (j = 0; j < size; j++)
	{
		d = d + *(a + (size * j) + (size - j - 1));
	}
	printf("%d, %d\n", c, d);
	printf("%d, ", c);
	printf("%d\n", d);
}
