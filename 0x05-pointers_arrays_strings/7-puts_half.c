#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * puts_half - prints half of a string, then new line
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
		i++;

	if (i % 2 != 0)
		n = (i + 1) / 2;
	else
		n = i / 2;

	for (; str[n] != '\0'; n++)
		_putchar(str[n]);

	_putchar('\n');
}
