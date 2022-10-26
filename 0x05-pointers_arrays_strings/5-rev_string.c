#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input
 * Return: nothing
 */

void rev_string(char *s)
{
	int len = 0, i;
	char rev[13];

	while (s[len] != '\0')
		len++;

	for (i = len; i >= 0; i--)
		rev[len - i] = *s[i];

	s = rev;
}
