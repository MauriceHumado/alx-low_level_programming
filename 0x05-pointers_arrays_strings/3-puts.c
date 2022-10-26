#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _puts - prints a string then a newline to stdout
 * @str: string input
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
