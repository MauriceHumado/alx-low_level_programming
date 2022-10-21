#include "main.h"

/**
 * print_diagonal - draw a diagonal line with '\'
 * @n: number of '\'
 */
void print_diagonal(int n)
{
	int n;

	if (n > 0)

	int len, space;

	{
		for (len = '0'; len < n; len++)
		{
			for (space = '0'; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - '1')
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
