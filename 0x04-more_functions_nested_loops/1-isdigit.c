#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for digit zero through nine
 * Return: 1 if digit otherwise 0
 * @c: number
 */

int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
