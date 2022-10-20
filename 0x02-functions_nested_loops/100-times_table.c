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

			j = 1;

			for (; j <= n; j++)
				putformat(i * j++);
			for (j = 1; j <= n; j++)
				putformat(i * j);
			_putchar('\n');
		}
	}
}
