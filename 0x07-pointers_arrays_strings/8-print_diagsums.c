#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a: matrix to be summed
 * @size: size of matrix
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int i, j, s1, s2, sum;

	sum = 0;
	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i * size + i);

		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				s1 += *((a + i * size) + j);
			}

			if ((i + j) == (size - 1))
			{
				s2 += *((a + i * size) + j);
			}
		}
	}
	printf("%d, ", sum);

	for (j = 0; j < size; j++)
	{
		sum += *(a + size * (j + 1) - (j + 1));
	}
	printf("%d\n", sum);
	printf("%d, %d\n", s1, s2);
}
