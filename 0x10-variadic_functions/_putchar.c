#include <unistd.h>

/**
 * __putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 1 on succes else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
