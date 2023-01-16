#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from zero to nine
 * Return: numbers from 0 to 9
 */

void print_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
		_putchar(d + '0');

	_putchar('\n');
}
