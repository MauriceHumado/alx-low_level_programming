#include "main.h"

/**
 * _puts - prints a string then a newline to stdout
 * @str: string input
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
