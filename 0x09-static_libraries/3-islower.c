#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase character.
 * @c: the character
 * Return: 1 if lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
