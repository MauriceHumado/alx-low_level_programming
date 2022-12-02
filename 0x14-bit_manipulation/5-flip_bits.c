#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

/**
 * flip_bits - gets the number of bits to flip to get from n to m
 * @n: initial number
 * @m: final number
 * Return: the number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	i = 0;
	n = n ^ m;
	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}
