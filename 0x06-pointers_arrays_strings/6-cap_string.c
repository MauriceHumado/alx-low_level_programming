#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @n: input string to capitalize letters
 * Return: capitalized string
 */

char *cap_string(char *n)
{
	int a = 0, i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (n[a])
	{
		i = 0;

		while (i < cspc)
		{
			if ((a == 0 || n[a - 1] == spc[i]) && (n[a] >= 97 && n[a] <= 122))
				n[a] -= 32;
			i++;
		}

		a++;
	}

	return (n);
}
