#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input
 * Return: nothing
 */

void rev_string(char *s)
{
	char rev = s[0];
	int alternate = 0; i;

	while (s[alternate] != '\0')
		alternate++;

	for (i = 0; i < alternate; i++)
	{
		alternate--;
		rev = s[i];
		s[i] = s[alternate];
		s[alternate] = rev;
	}
}
