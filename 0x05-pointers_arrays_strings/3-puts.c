#include "main.h"

/**
 * _puts - prints a string then a newline to stdout
 * @str: string input
 * Return: nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
