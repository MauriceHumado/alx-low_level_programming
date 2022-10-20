#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: the number
 */

void print_times_table(int n)
{
	int x, y;

	x = 0;

	if (n > 0 && n < 15)
	{
		for (; x <= n; x++)

		for (x = 0; x <= n; x++)
		{
			_putchar('0');

			y = 1;

			for (; y <= n; y++)
				_putchar(x * y++);
			for (y = 1; y <= n; y++)
				_putchar(x * y);
			_putchar('\n');
		}
	}
}
