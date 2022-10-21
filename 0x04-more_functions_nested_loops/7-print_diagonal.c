#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times '\' should be printed
 * Return: diagonal line
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			_puthcar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
