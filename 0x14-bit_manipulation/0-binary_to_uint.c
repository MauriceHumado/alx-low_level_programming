#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: input value
 * Return: converted number, or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int power, num;
