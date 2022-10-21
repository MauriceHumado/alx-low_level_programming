#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 10x number from 0 to 14
 * Return: 10times the number
 */

void more_numbers(void)
{
	int y, x;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar(y / 10 + '0');
			}
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
