#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file to append to
 * @text_content: A NULL-terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, results, length;

	fd = results = length = 0;
	if (!filename)
		return (-1);
	else if (!text_content || !text_content[0])
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	while (text_content[length])
		length++;
	results = write(fd, text_content, length);
	if (results < 0)
		return (-1);
	close(fd);
	return (1);
}
