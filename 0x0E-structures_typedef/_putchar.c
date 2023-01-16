#include <unistd.h>

/**
 * main: prints the character c to stdout
 * @c: the character to print
 * Return: always return 1 on success else -1
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
