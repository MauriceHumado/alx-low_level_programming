#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a: matrix to be summed
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a--;
	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
	printf("%d, %d\n", sum1, sum2);
}
