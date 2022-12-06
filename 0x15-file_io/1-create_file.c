#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: On Success 1, else -1 if failure
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
	return (1);
}
