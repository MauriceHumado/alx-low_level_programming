#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @n: bytes of memory area
 * @b: constant bytes
 * @s: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
