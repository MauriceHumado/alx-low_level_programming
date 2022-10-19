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
	int n;


	if (x < 0)
		n = -1 * (x % 10);
	else
		n = x % 10;

	_putchar((n % 10) + '0');

	return (n % 10);
}
