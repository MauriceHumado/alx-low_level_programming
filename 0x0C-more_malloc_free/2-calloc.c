#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Allocates memory for an array of a certain number of elements
 * @nmemb: The number of elements
 * @size: The byte size of each array element
 * Return: nmemb = 0, size = 0, or NULL if fail, else pointer to allocated mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	for (index = 0; index < nmemb; index++)
		mem[index] = 0;

	return (mem);
}
