#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character.
 * @c: character
 * Return: 1 if c is letter, lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
