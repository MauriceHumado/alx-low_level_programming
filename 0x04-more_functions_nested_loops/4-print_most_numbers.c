#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers zero to nine except two and four
 * Return: 0 to 9, except 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
