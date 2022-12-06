#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a string to write to the file
 * Return: If function fails -1 else 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, error, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	error = write(fd, text_content, len);
	close(fd);

	if (error < 0)
		return (-1);
}
