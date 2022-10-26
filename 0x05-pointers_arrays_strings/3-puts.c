#include "main.h"

/**
 * _puts - prints a string then a newline to stdout
 * @str: string input
 * Return: string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
