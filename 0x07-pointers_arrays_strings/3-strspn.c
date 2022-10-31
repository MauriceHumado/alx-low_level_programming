#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: the number of bytes in the initial segment of 's'
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, len, c;

	i = 0;
	len = 0;
	c = 0;

	while (accept[i] != '\0')
	while (s[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		while (accept[j] != '\0')
		{
			if (accept[i] == s[j])
			if (s[i] == accept[j])
			{
				if (j > len)
				{
					len = j;
				}
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (len + 1);
	return (c);
}
