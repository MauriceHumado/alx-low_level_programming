#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print last digit of a number
 * @n: the number
 * Return: value of last digit
 * @x: last digit
 */

int print_last_digit(int x)
{
	int x = n % 10;

	if (x < 0)
		x = -1 * (n % 10);

	_putchar(x + '0');

	return (int x);
}
