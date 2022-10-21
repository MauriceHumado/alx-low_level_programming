#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line
 * @n: number of '_' to be printed
 * Return: straight line
 */

void print_line(int n)
{
	int strgtline;

	if (n > 0)
	{
		for (strgtline = 0; strgtline < n; strgtline++)
			_putchar('_');
	}
	_putchar('\n');
}
