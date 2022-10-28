#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: Destination String; src string is appended to it
 * @src: Source string; gets appended to dest string
 * @n: Number of bytes of src that should be concatenated with dest
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];

		if (src[j] == '\0')
			j = n;
	}

	return (dest);
}
