#include "main.h"
#include <stdio.h>

/**
 * find_strlen - Returns the length of a string
 * @s: The string to be measured
 * Return: The length of the string
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
 * see_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 * @len: The length of s.
 * @i: The index of the string to be checked
 * Return: 1 if the string is a palindrome else 0
 */

int see_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (see_palindrome(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 * Return: 1 if the string is a palindrome else 0
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (see_palindrome(s, len, i));
}
