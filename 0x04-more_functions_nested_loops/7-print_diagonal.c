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
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				_puthcar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
