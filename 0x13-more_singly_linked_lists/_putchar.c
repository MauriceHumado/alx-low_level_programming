#include <unistd.h>

/**
 * _putchar - writes our character c to stdout
 * @c: the character
 * Return: on sucess 1 else -1
 */

int _puthcar(char c)
{
	return (write(1, &c, 1));
}
