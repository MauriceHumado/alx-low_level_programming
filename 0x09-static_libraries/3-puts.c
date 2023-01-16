#include "main.h"

/**
 * _puts - prints a string in stdout
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
