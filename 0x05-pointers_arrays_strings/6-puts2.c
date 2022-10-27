#include "main.h"

/**
 * puts2 - prints every other character of string, start with first character
 * @str: string to prep
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
