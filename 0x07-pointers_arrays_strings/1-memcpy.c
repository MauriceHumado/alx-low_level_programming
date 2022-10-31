#include "main.h"

/**
 * _memcpy - copy the memory area
 * @n: number of bytes to copy
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * Return: pointer to 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *memory;

	memory = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (memory);
}
