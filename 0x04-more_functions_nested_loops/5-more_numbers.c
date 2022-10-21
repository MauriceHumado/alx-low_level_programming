#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 10x number from 0 to 14
 * Return: 10times the number
 */

void more_numbers(void)
{
	int y, x;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
