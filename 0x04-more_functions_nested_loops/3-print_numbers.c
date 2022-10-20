#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from zero to nine
 * Return: numbers from 0 to 9
 * @x: number
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
