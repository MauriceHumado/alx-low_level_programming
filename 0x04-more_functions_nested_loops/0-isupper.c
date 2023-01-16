#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase characters.
 * Return: 1 if uppercase otherwise 0
 * @c: character to be checked
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
