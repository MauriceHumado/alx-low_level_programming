#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of a number
 * @n: the number
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');

	return (0);
}
