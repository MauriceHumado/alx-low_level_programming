#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: the number of bytes in the initial segment of 's'
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;
	unsigned int i, j;

	while (*s != '\0')
	for (i = 0; s[i] != '\0'; i++)
	{
		while (*accept != '\0')
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (*s == *accept)
				break;
			len++;
			accept++;
			s++;

			if (accept[j] == '\0')
				return (i);
		}
		if (*accept == '\0')
			break;
	}
	return (len + 1);

	return (i);
}
