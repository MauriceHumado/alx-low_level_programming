#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 10x number from 0 to 14
 * Return: 10times the number
 */

void more_numbers(void)
{
	int y, x;

	for (y = 0; y <= 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
