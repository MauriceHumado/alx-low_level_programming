#include <unistd.h>

/**
 * _putchar - the function that writes the character c to stdout
 * @c: the charcter to print
 * Return: on success 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
