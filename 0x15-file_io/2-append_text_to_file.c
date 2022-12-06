#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/uio.h>

/**
 * append_text_to_file - appends text at end of a file
 * @filename: The filename to open and append in
 * @text_content: The NULL terminated string to add
 * Return: On success 1, else -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, error, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (*(text_content + len))
		len++;

	error = write(fd, text_content, len);
	close(fd);
	if (error < 0)
		return (-1);
	return (1);
}
