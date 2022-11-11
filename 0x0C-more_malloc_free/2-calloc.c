#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Allocates memory for an array using malloc
 * @nmemb: The number of memory spaces
 * @size: size of nmemb
 * Return: pointer to allocated space or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(size * nmemb);

	if (space == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(space + i) = 0;

	return (space);
}
