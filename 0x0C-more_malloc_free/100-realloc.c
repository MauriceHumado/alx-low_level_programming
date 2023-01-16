#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to previous memory block
 * @old_size: size of ptr
 * @new_size: size of new memory to be allocated
 * Return: void Pointer to address of new memory block, or NULL if error
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_location, *new_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_location = malloc(new_size);
	new_ptr = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		new_location[i] = new_ptr[i];
	free(ptr);
	return (new_location);
}
