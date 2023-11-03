#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	if (text_content[0] == '"' && text_content[strlen(text_content) - 1] == '"')
	{
		text_content++;
		text_content[strlen(text_content) - 1] = '\0';
	}

	len = 0;
	while (text_content[len] != '\0')
		len++;

	bytes_written = write(fd, text_content, len);

	close(fd);

	if (bytes_written == len)
		return (1);
	else
		return (-1);
}
