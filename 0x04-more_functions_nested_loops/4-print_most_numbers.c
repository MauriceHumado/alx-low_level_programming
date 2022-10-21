#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers zero to nine except two and four
 * Return: 0 to 9, except 2 and 4
 */

void print_most_numbers(void)
{
	int e = '0';

	for (; e <= '9'; e++)
	{
		if (e != '2' && e != '4')
		{
			_putchar(e);
		}
	}
	_putchar('\n');
}
