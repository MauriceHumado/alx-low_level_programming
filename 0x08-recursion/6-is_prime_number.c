#include "mainh.h"

/**
 * chk_prime - find a prime number
 * @i: input int i
 * @j: input int j
 * Return: boolean value of the state of inputs
 */

int chk_prime(int i, int j)
{
	if (j == 1)
	{
		return (1);
	}

	if (i % j == 0)
	{
		return (0);
	}

	return (is_prime(i, j - 1));
}

/**
 * is_prime_number - print prime number
 * @n: input integer
 * Return: 1 if prime number else 0
 */

int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}

	return (is_prime(n, n - 1));
}
