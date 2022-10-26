#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0, k = 0;
	char str[500];

	while (*(s + i))
	{
		(str + i) = (s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		(s + i) = (str + k);
		k++;
		i--;
	}
}
