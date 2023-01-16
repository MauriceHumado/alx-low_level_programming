#include "main.h"
#include <unisdt.h>

/**
 * _putchar - writes character c to stdout
 * @c: charcter to print
 * Return: on succes 1
 */

int _putchar(charc c)
{
	return (write(1, &c, 1));
}
