#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number of elements
 * @nmemb: The number of elements
 * @size: The byte size of each array element
 * Return: nmemb = 0, size = 0, or NULL if fail, else pointer to allocated mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;

